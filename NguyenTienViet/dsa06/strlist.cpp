#include <iostream>
#include "strlist.h"
#include <fstream>

using namespace std;

StringLinkedList::StringLinkedList(){
    head = nullptr;
    tail = nullptr;
}

StringLinkedList::StringLinkedList(char * filename){
    fstream f;
    f.open(filename);

    while(!f.eof()){
        string st;
        f >> st;
        (*this).addLast(st);
    }
    f.close();

}

StringLinkedList::~StringLinkedList(){

};

bool StringLinkedList::empty() const{
    return (head);
};
const string& StringLinkedList::first() const{
    return head->data;
};
void StringLinkedList::addFirst(const string & e){
    StringNode * t = new StringNode;
    (*t).data = e;
    (*t).next = nullptr;

    if(!head){
		head = tail = t;
	}
	else{
		(*t).next = head;
		head = t;
	}
};
void StringLinkedList::removeFirst(){
    if (head == nullptr){
        cout << "danh sach rong" << endl;
        return;
    }
    if (head == tail){
        StringNode * t = head;
        head = tail = nullptr;
        delete t;
        return;
    }
    StringNode * t = head;
    head = (*head).next;
    delete t;

};

const  string&  StringLinkedList::last() const{
    return tail->data;
};
void  StringLinkedList::addLast(const string & e){
    StringNode * t = new StringNode;
    (*t).data = e;
    (*t).next = nullptr;

    if(!head){
		head = tail = t;
	}
	else{
		(*tail).next = t;
		tail = t;
	}
};
void  StringLinkedList::print() const{
    StringNode *cur = new StringNode;

    cur = head;
    while (cur){
        cout << (*cur).data << endl;
        cur = (*cur).next;
    }

};
