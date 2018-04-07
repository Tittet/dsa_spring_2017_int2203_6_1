#include<iostream>
#include"strlist.h"
#include"strlist.cpp"
using namespace std;

int main(){
	char * fileName = (char *)"Air.txt";
	StringLinkedList * s1 = new StringLinkedList(fileName);
	cout << "LinkedList1: ";
	s1->print();
	
	
	StringLinkedList * s2 = new StringLinkedList();
	s2->addFirst("January");
	s2->addFirst("Febuary");
	s2->addFirst("March");
	s2->addFirst("April");
	s2->addFirst("May");
	
	s2->addLast("Jun");

	cout << "LinkedList2: ";
	s2->print();
	cout << "empty() -> " << (s2->empty() ? "true" : "false") << endl;
	cout << "head -> " << s2->first() << endl;
	cout << "tail -> " << s2->last() << endl;
	
	s2->removeFirst();
	cout << "removeFirst: head -> " << s2->first() << endl;

	s2->removeLast();
	cout << "removeLast: tail -> " << s2->last() << endl;

	s2->print();
	return 0;
}

