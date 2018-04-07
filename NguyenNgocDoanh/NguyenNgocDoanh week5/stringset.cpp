#include<iostream>
using namespace std;

class StringSet{
	public:
		StringSet();
		StringSet(int _capacity);
		StringSet(const StringSet& asset);
		~StringSet();
		
		bool empty() const;
		int size() const;
		
		int find(const string& x) const;
		int binarySearch(const string x, string * A, int first, int last) const;
		void erase(const string & x);
		void insert(const string & x);
		void checkCapacity();
		
		StringSet& operator=(const StringSet& asset);
		string operator[](int i);
		const StringSet operator+(const StringSet& asset);
		void print();
		void sort();
		int getLast();
	private:
		string * element;
		int capacity;
		int last;
};

StringSet::StringSet(){
	last = 0;
	capacity = 10;
	element = new string[capacity];
}

StringSet::StringSet(int _capacity){
	last = 0;
	element = new string[_capacity];
}

StringSet::StringSet(const StringSet& asset){
	string * str = new string[capacity];
	for(int i = 0;i<last;i++){
		str[i] = element[i];
	}
	
}

StringSet::~StringSet(){
	delete [] element;
	last = 0;
	capacity = 0;
}

int StringSet::getLast(){
	return last;
}

bool StringSet::empty() const{
	return last == 0;
}

int StringSet::size() const{
	return last;
}

int StringSet::binarySearch(const string x, string * A, int first, int last) const{
	if(first > last) 
		return -1;
	int mid = (first+last)/2;
	if(x==A[mid]) 
		return mid;
	else if(x > A[mid])
		return binarySearch(x,A,mid+1, last);
	else
		return binarySearch(x,A,first,mid-1);	
}

int StringSet::find(const string& x) const{
	return binarySearch(x,element,0,last);
}

void StringSet::erase(const string & x){
	int i = find(x);
	if(i>=0){
		for(int t=i;t<=last;t++)
			element[t] = element[t+1];
			last--;
	}
}

void StringSet::checkCapacity(){
	if(last > capacity){
		capacity *=2;
		string * str = new string[capacity];
		for(int i=0;i<last;i++){
			str[i]=element[i];
		}
		delete[] element;
		element = str;
	}
}


// sap xep tang dan trong bang chu cai
void StringSet::sort(){
	for(int i=0;i<last;i++){
		for(int j=i;j<last;j++){
			if(element[i] > element[j]){
				string str = element[i];
				element[i] = element[j];
				element[j] = str;
			}
		}
	}
}

void StringSet::insert(const string & x){
	this->checkCapacity();
		element[last++] = x;
}

void StringSet::print(){
	for(int i=0;i<last;i++)
		cout << element[i] << " ";
		cout << endl;
}

StringSet& StringSet::operator=(const StringSet& asset){
	int newLength = asset.size();
	if(newLength > size())
		newLength = size();

	for(int i=0;i<newLength;i++){
		element[i] = asset.element[i];
		element[newLength] = '\0';
	}
}

string StringSet::operator[](int i){
	return element[i];;
}

const StringSet StringSet::operator+(const StringSet& asset){
	for(int i=0;i<asset.size();i++){
		insert(asset.element[i]);
	}
	sort();
}

int main(){
	StringSet str;
	str.insert("January");
	str.insert("Febuary");
	str.insert("March");
	str.insert("April");
	str.sort();
	cout <<"empty = " << (str.empty() ? "true" : "false") << endl;
	cout <<"size = " << str.size() << endl;
	cout <<"element[0] = " << str.operator[](0) << endl;
	cout <<"find(element[2]) =" << str.find(str.operator[](2)) << endl;
	str.print();

	str.erase("January");
	str.print();

	StringSet str2;
	str2.insert("May");
	str2.insert("Jun");
	str2.insert("July");
	str.operator+(str2);
	str.print();
	
	return 0;
	
}


