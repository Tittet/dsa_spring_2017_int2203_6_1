#ifndef STRLIST_H_INCLUDED
#define STRLIST_H_INCLUDED
#pragma once
#include<string>
using namespace std;

// Lop StringNode
// Bieu dien mot phan tu trong danh sach lien ket StringLinkedList

class StringNode{
	private:
		string data;
		StringNode * next;
		friend class StringLinkedList;
};


// Lop StringLinkedList
// Bieu dien mot danh sach lien ket don cac string

class StringLinkedList{
public:
	StringLinkedList(); // Constructor
	StringLinkedList(char * filename);  // Kien tao danh sach chua
										// cac xau ghi trong tep filename
										// Moi xau ghi tren 1 dong
	~StringLinkedList(); // Deconstructor
	bool empty() const; // DS co rong khong?
	const string& first() const; // Lay xau luu trong phan tu dau tien
	void addFirst(const string & e); // Them vao dau danh sach
	void removeFirst(); // Xoa phan tu dau danh sach
	const string& last() const;  // Lay xau luu trong phan tu cuoi cung
	void addLast(const string & e); // them vao cuoi danh sach
	void removeLast(); // xoa phan tu cuoi cung
	void print() const; // In toan bo danh sach

private:
	StringNode * head; // Con tro toi phan tu dau tien DS
	StringNode * tail; // Con tro toi phan tu cuoi cung DS
}; 

#endif