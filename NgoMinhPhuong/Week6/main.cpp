#include "strlist.cpp"
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	StringLinkedList* a = new StringLinkedList();
	cout <<"---Add last:11,22,33 ; add first 44  :------" << endl;
	a->addLast("11");
	a->addLast("22");
	a->addLast("33");
	a->addFirst("44");
	a->print();
	cout <<"---removefirst():" << endl;
	
	a->removeFirst();
	a->print();
	cout <<"---empty():" << endl;
	cout << a->empty() <<endl;
	cout <<"---first():" << endl;
	cout<< a->first() <<endl;
	cout <<"---last():" << endl;
	cout<< a->last() <<endl;
	cout <<"---  ~StringLinkedList():" << endl;
	a->~StringLinkedList();
	cout <<"---empty():" << endl;
	cout << a->empty() <<endl;	
	
	cout << " -- StringLinkedList(filename.txt)" << endl;
	
	StringLinkedList* b = new StringLinkedList("filename.txt");
	b->print();
	
	return 0;
}
