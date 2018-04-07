#pragma once
#include <string>
using namespace std;

class StringNode {
private:
    string data;
    StringNode * next;
    friend class StringLinkedList;
};


class StringLinkedList {
public:
    StringLinkedList();
    StringLinkedList(char * filename);

    ~StringLinkedList();
    bool empty() const;
    const string& first() const;
    void addFirst(const string & e);
    void removeFirst();
    const string& last() const;
    void addLast(const string & e);
    void print() const;

private:
    StringNode * head;
    StringNode * tail;
};
