#include "strlist.h"
#include <fstream>
#include <iostream>


StringLinkedList::StringLinkedList()
{

}

StringLinkedList::StringLinkedList(char * filename)
    : head(NULL), tail(NULL)
{
    ifstream fin(filename);

    string data;
    StringNode * current = head;
    while (fin >> data)
    {
        addLast(data);
    }
    fin.close();
}

bool StringLinkedList::empty() const
{
    return head == NULL;
}

void StringLinkedList::addLast(const string& e)
{
    StringNode * current = new StringNode();
    current->data = e;
    current->next = NULL;
    if (empty())
    {
        head = current;
        tail = current;
    }
    else
    {
        tail->next = current;
        tail = current;
    }
}

void StringLinkedList::print() const
{
    StringNode * current = head;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

const string& StringLinkedList::last() const
{
    if (!empty())
        return tail->data;
    return NULL;
}

const string& StringLinkedList::first() const
{
    if (!empty())
        return head->data;
    return NULL;
}

void StringLinkedList::addFirst(const string & e)
{
    StringNode * current = new StringNode();
    current->data = e;
    current->next = NULL;
    if (empty())
    {
        head = current;
        tail = current;
    }
    else
    {
        current->next = head;
        head = current;
    }
}

void StringLinkedList::removeFirst()
{
    if (!empty())
    {
        StringNode * current = head;
        if (head == tail)
        {
            tail = current->next;
        }
        head = current->next;
        delete current;
    }
}


StringLinkedList::~StringLinkedList()
{
    StringNode * current = head;
    while (current != NULL)
    {
        StringNode * next = current->next;
        delete current;
        current = next;
    }
}
