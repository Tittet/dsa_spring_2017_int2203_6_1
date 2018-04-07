#include<iostream>
#include<list>

using namespace std;

//in danh sach
void printList(list<int>A){
	list<int>::iterator pos = A.begin();
	for(pos = A.begin(); pos != A.end(); pos++)
		cout << *pos << "  ";
	cout <<"\n";
}

//kiem tra danh sach rong
bool empty(list<int>A){
	if(A.empty())
		return true;
}

//kiem tra do dai
int length(list<int>A){
	return A.size();
}

//tra ve gia tri tai vi tri i
int element(list<int>A , int p){
	list<int>::iterator pos = A.begin();
	for(int i = 0; i < p ; i++)
		pos++;
	return *pos;
}

//xen gia tri x vao vi tri i
void insert(list<int> &A, int pos, int val){
	list<int>::iterator pos1 = A.begin();
	for(int i = 0; i < pos; i++)
		pos1++;
	A.insert(pos1,val);
}

//them gia tri vao duoi ds
void append(list<int>&A, int val){
	A.push_back(val);
}

//xoa 1 phan tu tai 1 vi tri trong danh sach
void del(list<int>&A, int pos){
	list<int>::iterator pos1 = A.begin();
	for(int i = 0; i < pos; i++)
		pos1++;
	A.erase(pos1);
	
}
int main(){
	list<int> A;
	for(int i = 1; i<=3; i++)
		A.push_back(i);
	for(int i = 3; i<=5; i++)
		A.push_back(i);
		
	//in danh sach
	printList(A);
	
	//kiem tra rong	
	if(empty(A))
		cout << "empty(A): true";
	else
		cout << "empty(A): false";
	cout<<"\n";
	//do dai
	cout << "length(A): " << length(A) << "\n";
	
	// tra ve gia tri tai vi tri i
	cout << "element(A,0): " << element(A,0) << "\n";
	cout << "element(A,2): " << element(A,2) << "\n";
	
	insert(A,2,10);
	append(A, 5);
	printList(A);
	del(A,3);
	del(A,1);
	printList(A);
	
	return 0;
}
