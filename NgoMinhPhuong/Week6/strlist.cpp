#include<bits/stdc++.h>
#include "strlist.h"

using namespace std;

StringLinkedList::StringLinkedList(){
	
	head = NULL;
	tail = NULL;
	
	
}

StringLinkedList::StringLinkedList(char* filename){
	
	ifstream in(filename);
	head = NULL;
	tail = NULL;
	
	while(!in.eof()){
		string tmp;
		in >> tmp;
		this->addLast(tmp);
	}
	in.close();
	
}

 		//StringLinkedList(string filename); // kien tao DS chua
 		// cac xau ghi trong tep filename
 		// moi xau tren 1 dong
 		
 		
 		
 		StringLinkedList::~StringLinkedList(){
 			
 			StringNode* tmp = new StringNode;
 			tmp = head;
 			while(tmp->next != NULL){
 				delete tmp;
 				tmp = tmp->next;
 			}
 			delete tail;
 			head = NULL;
 			tail = NULL;
 		} // huy DS
 		
 		
 		bool StringLinkedList::empty() const{
		 
		 	return head == NULL;
		 	
		 } // DS co rong khong?
		 
		 
 		const string& StringLinkedList::first() const {
		 	
		 	return head->data;
		 
		 } // lay xau luu trong phan tu dau tien
		 
		 
 		void StringLinkedList::addFirst(const string & e){
 			if(!empty()){
				StringNode* newNode = new StringNode();
 				newNode->data = e;
 				newNode->next = head;
				head = newNode; 
			 }else{
			 	StringNode* newNode = new StringNode();
			 	newNode->data = e;
			 	newNode->next = NULL;
			 	head = newNode;
			 	tail = head;
			 }
 			  
 		} // them vao dau DS
 		
 		
 		void StringLinkedList::removeFirst(){
 			
 			if(!empty()){
 				StringNode* tmp = head;
 				head = head->next;
 				delete tmp;	
 			}
 			
 		} // xoa phan tu dau DS
 		
 		
 		const string& StringLinkedList::last() const{
		 
		 	if(tail != NULL){
		 		
		 		return tail->data;
		 	}
		 } // lay xau luu trong phan tu cuoi cung
		 
		 
 		void StringLinkedList::addLast(const string & e){
 		
		 	if(head!=NULL){
			 	StringNode* tmp = new StringNode();
		 		tmp->data = e;
		 		tmp->next = NULL;
		 		tail->next = tmp;
		 		tail = tmp;
			 }
			 else{
			 	
				
				StringNode* tmp = new StringNode();
			 	tmp->data = e;
			 	tmp->next = NULL;
			 	head = tmp;
			 	tail = tmp; 	
			 }
		 	
		 } // them vao cuoi DS
		 
		 
 		void StringLinkedList::print() const{
		 	
		 	if(!empty()){
		 		
		 		StringNode* tmp = head;
		 		while(tmp->next != NULL){
		 			cout<<tmp->data<<endl;
		 			tmp = tmp->next;
		 		}
		 		cout << tail->data << endl;
		 	}	
		 } // in toan bo DS






