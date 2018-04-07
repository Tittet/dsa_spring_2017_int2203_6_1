#include<iostream>
#include<fstream>
#include<string>
#include"strlist.h"
using namespace std;
#define nullptr NULL
const string st = "Empty List";

StringLinkedList::StringLinkedList():head(nullptr),tail(nullptr){
}

StringLinkedList::StringLinkedList(char * fileName){
	string line;
	head = nullptr;
	tail = nullptr;
	ifstream file (fileName);
	if(file.is_open()){
		while(!file.eof()){
			getline(file,line);
			addLast(line);
		}
	file.close();
	}
	else
		cout << "Khong mo duoc file";
}

StringLinkedList::~StringLinkedList(){
	StringNode * temp = head;
	while(temp->next != tail){
		delete temp;
		temp = temp->next;
	}
	delete tail;
}

bool StringLinkedList::empty() const{
	return head==nullptr;
}

const string& StringLinkedList::first() const {
	if(empty())
		return st;
	else
		return head->data;
}

const string& StringLinkedList::last() const {
	if(empty())
		return st;
	else
		return tail->data;
}

void StringLinkedList::addFirst(const string & e){
	StringNode * q = new StringNode()	;
	q->data = e;
	q->next = head;
	head = q;
	if(head->next == nullptr) tail = head;
}

void StringLinkedList::addLast(const string & e){
	if(empty()){
		StringNode * q = new StringNode();
		q->data = e;
		q->next = NULL;
		tail = q;
		head = tail;
	}
	else{
		StringNode * q = new StringNode();
		q->data = e;
		q->next = NULL;
		tail->next = q;
		tail = q;				
	}
}

void StringLinkedList::removeFirst(){
	if(!empty()){
		StringNode * t = head;
		head = head->next;
		delete t;
	}
}

void StringLinkedList::removeLast(){
	if(!empty()){
		StringNode * temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}
		delete tail;
		tail = temp;
	}
}

void StringLinkedList::print() const{
	if(empty())
		cout << st << endl;
	else {
		StringNode * temp = head;
		while(temp != tail){
			cout << temp->data << ", ";
			temp = temp->next;
		}
		cout << tail->data << endl;		
	}
}
