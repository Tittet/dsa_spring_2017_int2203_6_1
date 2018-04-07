#include<bits/stdc++.h>

using namespace std;

const int DEFAULT_SIZE = 100;




class StringSet{
	
	public:
		StringSet();
		StringSet(int _capacity);
		StringSet(const StringSet& asset);
		~StringSet();
		
		bool empty();
		int size();
		
		int find(const string& x) const;
		void erase(const string& x);
		void insert(const string&  x);
		
		StringSet& operator=(const StringSet& asset);
		const StringSet operator+ (const StringSet& asset);
		void sort();
		void print();
	private:
		string * element;
		int capacity;
		int last;
};


void StringSet::print(){
	
	cout << "element = { " <<endl;
	for(int i = 0 ; i < size() ; i++){
		
		cout << "          "<<element[i] <<endl;
	}
	
	cout << " }" << endl;
	
}

StringSet::StringSet(){
	
	this->element = new string[DEFAULT_SIZE];
	this->capacity = DEFAULT_SIZE;
	this->last = -1;
	
}


StringSet::StringSet(const StringSet& asset){
	
	
	this->element = asset.element;
	this->capacity = asset.capacity;
	this->last = asset.last;
	
}

StringSet::StringSet(int _capacity){
	
	this->element = new string[_capacity];
	this->last = -1;
	this->capacity = _capacity;
	
}

StringSet::~StringSet(){
	
	delete[] this->element;
	this->last = -1;
	this->capacity = 0;
}


bool StringSet::empty(){
	
	return (last==-1);
}

int StringSet::size(){
	
	return last+1;
}

int StringSet::find(const string& x) const {
	
	int start = 0;
	int end = last;
	int middle;
	int position = -1;
	
	
	
	while(start <= end){
		
		middle = (start+end)/2;
		if(element[middle] == x){
			position = middle;
			return position;
			
		}
		else{
			if(element[middle] < x){
				end = middle -1;
			}
			else{
				start = middle +1;
			}
		}
	}
	
	return position;
	

}

void StringSet::sort(){
	
	for(int i = 0 ; i < this->size(); i++){
		for(int j = i+1 ; j < this->size() ; j++){
			
			if(element[j] > element[i]){
				
				string tmp;
				tmp = element[i];
				element[i] = element[j];
				element[j] = tmp;
				  
			}
		}
	}


}

void StringSet::erase(const string& x){
	
	if(find(x) != -1){
		for(int i = find(x) ; i < this->size()-1 ; i++ ){
			
			element[i] = element[i+1];
			
		}
		
		last--;
	}
}

void StringSet::insert(const string& x){
	
	
	
	if(this->size() == this->capacity){
		
		string* tmp = new string[this->capacity++];
		
		for(int i = 0 ; i < this->size() ; i++){
			tmp[i] = element[i];
			
		}
		
		this->last++;
		this->capacity++;
		tmp[last] = x;
		delete[] this->element;
		
		element  = tmp;		
	}else{
		if(last==-1){
			element[0] = x ; 
			this->last++;
		}else{
			element[last+1] = x;
			last++;	
		}
		
	}
}

StringSet& StringSet::operator=(const StringSet& asset){
	
	this->element = asset.element;
	this->capacity = asset.capacity;
	this->last = asset.last;
	
}

const StringSet StringSet::operator+(const StringSet& asset){
	string* tmp = new string[this->size()+asset.last];
	for(int i = 0 ; i < this->size() ; i++){
		
		tmp[i] = this->element[i];
		 
	}
	
	for(int i = this->size() ; i < this->size()+asset.last ; i++){
		
		tmp[i] = asset.element[i-(this->size())];
		
	}
	
	delete[] element;
	
	this->element = tmp;
	this->last = this->size()+asset.last - 1;
	this->capacity = this->size()+asset.last;
}



int main(){
	StringSet test;
	cout << "test" << endl;
	cout << "insert: January,Febuary,March,April ->" << endl;
	test.insert("January");
	test.insert("Febuary");
	test.insert("March");
	test.insert("April");
	test.print();
	cout << "sort()->"<<endl;
	test.sort();
	test.print();
	cout << " test is empty ? : " << test.empty() << endl;
	cout << "find March in test :" <<test.find("March")<<endl;
	cout << "erase(March)->" <<endl;
	test.erase("March");
	test.print();
	return 0;
}




