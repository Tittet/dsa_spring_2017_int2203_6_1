#include<bits/stdc++.h>
using namespace std;

const int DEFAULT_SIZE = 100;


class DArrayList{
		public:
			DArrayList();
			DArrayList(const DArrayList& b);
			void destructor();
			void operator=(const DArrayList& b);
			int* getElement();
			int getSize();
			int getLast();
			void insert(int position , int value);
			void append(int value);
			void print();
			bool isEmpty();
			int getByPosition(int position);
			void deleteByPostion(int postition);
			
		private:
			int* element;
			int size;
			int last;
};

int main (){
	cout << "demo:" << endl;
	DArrayList test;
	test.print();
	cout << "is empty ? : " << test.isEmpty()<<endl;
	cout << "append some interger:" << endl;
	test.append(1);
	test.append(34);
	test.append(24);
	test.append(0);
	test.print();
	cout << "test.insert(0,3) ->";
	test.insert(0,3);
	test.print();
	cout << "number of elements : " << test.getLast()+1 << endl;
	cout << "element has index 3 : " << test.getByPosition(3) << endl;
	cout << "delete element has index 2 ->";
	test.deleteByPostion(2);
	test.print();  
	return 0;
}

DArrayList::DArrayList(){
	element = new int[DEFAULT_SIZE];
	size = DEFAULT_SIZE;
	last = -1;
}

int* DArrayList::getElement(){
	return this->element;
}

int DArrayList::getLast(){
	return this->last;
}

int DArrayList::getSize(){
	return this->size;
}

DArrayList::DArrayList(const DArrayList &b){
	this->element = b.element;
	this->last = b.last;
	this->size = b.size;
}

void DArrayList::operator=(const DArrayList& b){
	delete[] this->element;
	this->element = b.element;
	this->last = b.last;
	this->size = b.size;
}

void DArrayList::insert(int position , int value){
	if(position > this->last||position <0||position >= size){
		cout << "error: out of index!" << endl;
	}
	else{
		if(last != size-1 ){
			for(int i = last+1; i > position ; i--){
				element[i] = element[i-1];
			}
			element[position] = value;
			this->last++;
		}
		else{
			int* newArray = new int[size++];
			for(int i = 0 ; i <= last ; i++ ){
				newArray[i] = element[i]; 
			}
			delete[] element;
			element = newArray;
			for(int i = last+1; i > position ; i--){
				element[i] = element[i-1];
			}
			element[position] = value;
			this->last++;
			
		}
	}
	
}

void DArrayList::append(int value){
	if(last == size-1){
		int* newArray = new int[size++];
		for(int i = 0 ; i <= last ; i++ ){
			newArray[i] = element[i]; 
		}
		delete[] element;
		element = newArray;
		element[last+1] = value;
		last++;
	}
	else{
		element[last+1] = value;
		last++;
	}
}

void DArrayList::print(){
	cout << "element = [ ";
	for(int i = 0 ; i <=last ; i++){
		cout << *(element+i) << ' ' ;
	}
	cout << ']' << endl;
}

bool DArrayList::isEmpty(){
	return (last=-1)?true:false;
}

int DArrayList::getByPosition(int position){
	return *(element+position);
}

void DArrayList::deleteByPostion(int position){
	for(int i = position ; i <= last ; i++){
		element[i] = element[i+1];
		last--;
	}
}








