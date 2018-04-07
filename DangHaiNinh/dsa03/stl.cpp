#include <iostream>
#include <list>
using namespace std;

/*******************************************************************************
* API
*******************************************************************************/

/*!
 * Function: {void} printList(list<int> L)
 * @brief:
 *          <print list to display>.
 *
 * @param:
 *          <list<int> L: list want to print>.
 *
 * @return:
 *          <none>.
 */
void printList(list<int> L);

/*!
 * Function: {int} empty(list<int> L)
 * @brief:
 *          <Check list empty>.
 *
 * @param:
 *          <list<int> L: list want to check>.
 *
 * @return:
 *          < 1 if list empty
 *            0 if list not empty >.
 */
int empty(list<int> L);

/*!
 * Function: {int} length(list<int> L)
 * @brief:
 *          <length calculation>.
 *
 * @param:
 *          <list<int> L: list want to caculate>.
 *
 * @return:
 *          <length of list>.
 */
int length(list<int> L);

/*!
 * Function: {int} element(list<int> L, int pos)
 * @brief:
 *          <access the list element>.
 *
 * @param:
 *          < - list<int> L: list want to access
 *            - pos: the position of the element >.
 *
 * @return:
 *          <value of element>.
 */
int element(list<int> L, int pos);

/*!
 * Function: {void} insert(list<int> &L, int pos, int val)
 * @brief:
 *          <insert element to list>.
 *
 * @param:
 *          < - list<int> &L: list want to insert
 *            - pos: the position in front of the added element
 *            - val: value of element >.
 *
 * @return:
 *          <none>.
 */
void insert(list<int> &L, int pos, int val);

/*!
 * Function: {void} append(list<int> &L, int val)
 * @brief:
 *          <add the element to the end>.
 *
 * @param:
 *          < - list<int> &L: list want to insert
 *            - val: value of element >.
 *
 * @return:
 *          <none>.
 */
void append(list<int> &L, int val);

/*!
 * Function: {void} del(list<int> &L, int pos)
 * @brief:
 *          <delete element of list>.
 *
 * @param:
 *          < - list<int> &L: list want to delete
 *            - pos: the position of the element >.
 *
 * @return:
 *          <none>.
 */
void del(list<int> &L, int pos);

/*******************************************************************************
* CODE
*******************************************************************************/
int main()
{
    /* Creat list */
    list<int> A;
    int i;
    for (int i = 1; i < 4; i++)
    {
        A.push_back(i);
    }
    for (int i = 3; i < 6; i++)
    {
        A.push_back(i);
    }

    cout << "\n\tA = ";
    printList(A);

    /* empty(A) */
    if (empty(A))
    {
        cout << "\n\tempty(A) -> true" << endl;
    }
    else
    {
        cout << "\n\tempty(A) -> false" << endl;
    }

    /* length(A) */
    cout << "\n\tlength(A) -> " << length(A) << endl;

    /* element */
    cout << "\n\telement(A, 0) -> " << element(A, 0) << endl;
    cout << "\telement(A, 2) -> " << element(A, 2) << endl;

    /* insert */
    cout << "\n\tinsert(A, 2, 10) -> ";
    insert(A, 2, 10);
    printList(A);
    cout << endl;

    /* append */
    cout << "\n\tappend(A, -5) -> ";
    append(A, -5);
    printList(A);
    cout << endl;

    /* del */
    cout << "\n\tdel(A, 3) -> ";
    del(A, 3);
    printList(A);

    cout << "\n\tdel(A, 1) -> ";
    del(A, 1);
    printList(A);
    cout << endl;
}

/*!
 * Function: {void} printList(list<int> L)
 * @brief:
 *          <print list to display>.
 *
 * @param:
 *          <list<int> L: list want to print>.
 *
 * @return:
 *          <none>.
 */
void printList(list<int> L)
{
    list<int>::iterator pos = L.begin();
    for(pos = L.begin(); pos != L.end(); pos++)
    {
        cout << *pos << ' ';
    }
}

/*!
 * Function: {int} length(list<int> L)
 * @brief:
 *          <length calculation>.
 *
 * @param:
 *          <list<int> L: list want to caculate>.
 *
 * @return:
 *          <length of list>.
 */
int length(list<int> L)
{
    return L.size();
}

/*!
 * Function: {int} empty(list<int> L)
 * @brief:
 *          <Check list empty>.
 *
 * @param:
 *          <list<int> L: list want to check>.
 *
 * @return:
 *          < 1 if list empty
 *            0 if list not empty >.
 */
int empty(list<int> L)
{
    return L.empty();
}

/*!
 * Function: {int} element(list<int> L, int pos)
 * @brief:
 *          <access the list element>.
 *
 * @param:
 *          < - list<int> L: list want to access
 *            - pos: the position of the element >.
 *
 * @return:
 *          <value of element>.
 */
int element(list<int> L, int pos)
{
    list<int>::iterator position = L.begin();
    for (int i = 0; i < pos; i++)
    {
        position++;
    }
    return *position;
}

/*!
 * Function: {void} insert(list<int> &L, int pos, int val)
 * @brief:
 *          <insert element to list>.
 *
 * @param:
 *          < - list<int> &L: list want to insert
 *            - pos: The position in front of the added element
 *            - val: value of element >.
 *
 * @return:
 *          <none>.
 */
void insert(list<int> &L, int pos, int val)
{
    list<int>::iterator position = L.begin();
    for (int i = 0; i < pos; i++)
    {
        position++;
    }
    L.insert(position, val);
}

/*!
 * Function: {void} append(list<int> &L, int val)
 * @brief:
 *          <add the element to the end>.
 *
 * @param:
 *          < - list<int> &L: list want to insert
 *            - val: value of element >.
 *
 * @return:
 *          <none>.
 */
void append(list<int> &L, int val)
{
    L.insert(L.end(), val);
}


/*!
 * Function: {void} del(list<int> &L, int pos)
 * @brief:
 *          <delete element of list>.
 *
 * @param:
 *          < - list<int> &L: list want to delete
 *            - pos: the position of the element >.
 *
 * @return:
 *          <none>.
 */
void del(list<int> &L, int pos)
{
    list<int>::iterator position = L.begin();
    for (int i = 0; i < pos; i++)
    {
        position++;
    }
    L.erase(position);
}