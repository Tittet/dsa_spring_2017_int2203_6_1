#ifndef STRLIST_CPP
#define STRLIST_CPP

#include <iostream>
#include <fstream>
#include <string>
#include "strlist.h"
using namespace std;

const string vacuous = "Empty List";

StringLinkedList::StringLinkedList()
{
    head = nullptr;
    tail = nullptr;
}

StringLinkedList::StringLinkedList(char * fileName){
    string line;
    head = nullptr;
    tail = nullptr;
    ifstream file (fileName);
    while (!file.eof())
    {
        getline(file, line);
        addLast(line);
    }
    file.close();
}

StringLinkedList::~StringLinkedList()
{
    StringNode * temp = head;
    while (temp->next != tail)
    {
        delete temp;
        temp = temp->next;
    }
    delete tail;
}

bool StringLinkedList::empty() const
{
   return head == nullptr;
}

const string& StringLinkedList::first() const
{
    if (empty())
        return vacuous;
    else
        return head->data;
}

const string& StringLinkedList::last() const
{
    if (empty())
        return vacuous;
    else
        return tail->data;
}

void StringLinkedList::addFirst(const string & e)
{
    StringNode * first = new StringNode()   ;
    first->data = e;
    first->next = head;
    head = first;
    if (head->next == nullptr)
    {
        tail = head;
    }
}

void StringLinkedList::addLast(const string & e)
{
    if (empty())
    {
        StringNode * last = new StringNode();
        last->data = e;
        last->next = nullptr;
        tail = last;
        head = tail;
    }
    else
    {
        StringNode * last = new StringNode();
        last->data = e;
        last->next = nullptr;
        tail->next = last;
        tail = last;
   }
}

void StringLinkedList::removeFirst()
{
    if (!empty())
    {
        StringNode * first = head;
        head = head->next;
        delete first;
    }
}

void StringLinkedList::removeLast()
{
    if (!empty())
    {
        StringNode * temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
   }
}

void StringLinkedList::print() const
{
    if (empty())
    {
       cout << vacuous << endl;
    }
    else
    {
        StringNode * current = head;
        while(current != tail)
        {
            cout << current->data << "    ";
            current = current->next;
        }
        cout << tail->data << endl;     
    }
}

#endif