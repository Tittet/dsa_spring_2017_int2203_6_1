#include <iostream>
#include "strlist.h"
#include "strlist.cpp"
using namespace std;


int main()
{
    StringLinkedList strlist("strings.txt");
    strlist.print();
    cout << "first: " << strlist.first() << endl;
    cout << "last: " << strlist.last() << endl;

    cout << endl;
    cout << "add march" << endl;
    strlist.addFirst("march");
    strlist.print();

    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        strlist.removeFirst();
    }
    strlist.print();
    return 0;
}
