#include <iostream>
#include "stringset.h"
#include "stringset.cpp"
using namespace std;


int main()
{
    StringSet a;

    a.insert("md");
    a.insert("cv");
    cout << "tap string a :" << endl;
    a.print();

    cout << "a.insert('bf'):" << endl;
    a.insert("bf");
    a.print();

    cout << "a.size() = " << a.size() << endl;

    cout << "a.empty() = " << a.empty() << endl;

    cout << "a.erase('cv'):" << endl;
    a.erase("cv");
    a.print();

    cout << "a.find('md') = " << a.find("md") << endl;

    StringSet b;
    b.insert("ex");
    b.insert("a");
    b.print();

    StringSet c = b;
    c.print();
    return 0;
}
