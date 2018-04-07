#include <iostream>
#include "strlist.h"
#include <fstream>
using namespace std;

int main()
{
    fstream f("strList.txt");
    f << "da" << endl << "zs";
    f.close();

    StringLinkedList L("strList.txt");
    string s = "df";
    L.addFirst(s);
    L.print();
    L.removeFirst();
    cout << L.first();

    return 0;
}
