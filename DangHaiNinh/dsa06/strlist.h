#ifndef STRLIST_H
#define STRLIST_H

#include <iostream>
#include <string>
using namespace std;

/* Class StringNode 
   Performing a molecule of StringLinkedList */
class StringNode
{
private:
    string data;
    StringNode* next;
    friend class StringLinkedList;
};

/* Class StringLinkedList 
   Performing Linked List of string */
class StringLinkedList
{
public:
    /* • StringLinkedList(): tạo danh sách rỗng 
       • StringLinkedList(char * filename): tạo danh sách từ các xâu ghi trong tệp filename.
                                            Trong tệp này mỗi xâu được ghi trên 1 dòng
       • ~StringLinkedList(): hủy DS
       • bool empty() const: kiểm tra xem DS có rỗng không?
       • const string& first() const: lấy xâu lưu trong phần tử đầu tiên
       • void addFirst(const string & e): thêm vào đầu DS
       • void removeFirst(): xóa phần tử đầu DS
       • const string& last() const: lấy xâu lưu trong phần tử cuối cùng
       • void addLast(const string & e): thêm vào cuối DS 
       • void print() const: in toàn bộ DS */
    StringLinkedList();
    StringLinkedList(char * filename);
    ~StringLinkedList();
    bool empty() const;
    const string& first() const;
    void addFirst(const string & e);
    void removeFirst();
    const string& last() const;
    void addLast(const string & e);
    void removeLast();
    void print() const;
 
private:
    StringNode * head;
    StringNode * tail;
};

#endif