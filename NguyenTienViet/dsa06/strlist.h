#include <string>
#ifndef STRLIST_H_INCLUDED
#define STRLIST_H_INCLUDED

using namespace std;

// Lop StringNode
// bieu dien mot phan tu trong danh sach lien ket StringLinkedList
class StringNode{
private:
    string data;
    StringNode * next;
    friend class StringLinkedList;
};

// Lop StringLinkedList
// bieu dien mot danh sach lien ket don cac string
class StringLinkedList{
public:
    StringLinkedList(); // kien tao DS rong
    StringLinkedList(char * filename);  // kien tao DS chua
                                        // cac xau ghi trong tep filename
                                        // moi xau tren 1 dong
    ~StringLinkedList(); // huy DS
    bool empty() const; // DS co rong khong?
    const string& first() const; // lay xau luu trong phan tu dau tien
    void addFirst(const string & e); // them vao dau DS
    void removeFirst(); // xoa phan tu dau DS
    const string& last() const; // lay xau luu trong phan tu cuoi cung
    void addLast(const string & e); // them vao cuoi DS
    void print() const; // in toan bo DS

private:
    StringNode * head; // con tro toi phan tu dau DS
    StringNode * tail; // con tro toi phan tu cuoi DS
};

#endif // STRLIST_H_INCLUDED
