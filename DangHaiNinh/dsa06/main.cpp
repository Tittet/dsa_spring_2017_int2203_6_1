#include<iostream>
#include"strlist.h"
using namespace std;

int main()
{
	cout << "\n\tReading file airport.txt...   ";
	char * fileName = (char *) "airport.txt";
	StringLinkedList * s = new StringLinkedList(fileName);
	cout << "Done!" << endl;
	cout << "\n\tLinked List:	";
	s->print();

	/* empty */
    if (s->empty())
    {
        cout << "\n\tempty() -> true" << endl;
    }
    else
    {
        cout << "\n\tempty() -> false" << endl;
    }

    /* first */
    cout << "\n\tfirst() -> ";
    cout << s->first() << endl;

    /* last */
    cout << "\n\tlast() -> ";
    cout << s->last() << endl;

    /* remove first */
    cout << "\n\tremoveFirst() -> ";
    s->removeFirst();
    s->print();

    /* add first */
    cout << "\n\taddFirst(""Noi Bai"") -> ";
    s->addFirst("Noi Bai");
    s->print();

    /* remove last */
    cout << "\n\tremoveLast() -> ";
    s->removeLast();
    s->print();

    /* add last */
    cout << "\n\taddLast(""Chu Lai"") -> ";
    s->addLast("Chu Lai");
    s->print();

	return 0;
}