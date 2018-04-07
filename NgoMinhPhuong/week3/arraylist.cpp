#include<bits/stdc++.h>

using namespace std;

class ArrayList{
	
	public:
		static const int MAX_SIZE = 100;
		ArrayList();
		bool empty() const;
		int length() const;
		void insert(const int x , int i);
		void append(const int x);
		void erase(int i);
		int& at(int i) const;
		void print();
		
	private:
		int element[MAX_SIZE];
		int current;
		int last;
		
};

int main(){


	ArrayList A;
	
 	for(int i=1;i<=3;i++) 
		A.append(i);
 	for(int i=3;i<=5;i++)
	 	A.append(i);
 	A.print();
 	
 	cout << "empty(A) = ";
 	A.empty() ? cout << "true" << endl : cout << "false" << endl;
 	cout << "length(A) = " << A.length() << endl;
 	cout << "element(A, 0) -> " << A.at(0) << endl;
 	cout << "element(A, 2) -> " << A.at(2) << endl;
 	
 	cout << "insert(A, 2, 10) -> ";
 	A.insert(10, 2);
 	A.print();
 	
 	cout << "append(A, -5) -> ";
 	A.append(-5);
 	A.print();
 	
 	cout << "del(A, 3) -> ";
 	A.erase(3);
 	A.print();
 	
 	cout << "del(A, 1) -> ";
 	A.erase(1);
 	A.print();
 	
 	return 0;
 }
 
 
ArrayList::ArrayList(){
	
	this->current = NULL;
	this->last = NULL;
}

bool ArrayList::empty() const{
	
	return this->last == NULL;
}

int ArrayList::length() const {
	
		return this->last;
}

void ArrayList::append(const int x){
	
	this->element[this->last++] = x;
	
}

void ArrayList::insert(const int x , int i){
	for(int k = this->last + 1 ; k > i ; k--){
	
		this->element[k] = element[k-1];
	}
	
	this->element[i] = x;
	this->last++;
	
}

void ArrayList::erase(int i){
	for(int k = i ; k < this->last ; k++){
		
		this->element[k] = element[k+1];
	}
	
	this->last--;
	
}

int& ArrayList::at(int i) const {
	
	int k = this->element[i]; 
	return k;
}

void ArrayList::print(){
	
	cout << "A = (" ;
	for(int i = 0 ; i < this->last ; i++){
		cout << this->element[i] << " " ;
	}
	cout << ")" << endl;
}

