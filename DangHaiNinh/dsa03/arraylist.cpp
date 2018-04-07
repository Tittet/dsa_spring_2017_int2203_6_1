#include <iostream>
#include <list>
using namespace std;

/* Class represents list of intergers setup by array */
class ArrayList
{
public:
    static const int MAX_last = 100;

    /* Initialization of the empty list */
    ArrayList();

    /*!
    * Function: {bool} empty() const
    * @brief:
    *          <check list created at ArrayList() empty or not>.
    *
    * @param:
    *          <none>.
    *
    * @return:
    *          < true if list empty
    *            false if list not empty >.
    */
    bool empty() const;

    /*!
    * Function: {int} length() const
    * @brief:
    *          <calculate length of list created at ArrayList()>.
    *
    * @param:
    *          <none>.
    *
    * @return:
    *          <length of list>.
    */
    int length() const;

    /*!
    * Function: {void} insert(const int x, int i)
    * @brief:
    *          <insert element to list created at ArrayList()>.
    *
    * @param:
    *          <- x: value of element
    *           - i: the position in front of the added element >.
    *
    * @return:
    *          <none>.
    */
    void insert(const int x, int i);

    /*!
    * Function: {void} append(const int x)
    * @brief:
    *          <insert element to the end of list created at ArrayList()>.
    *
    * @param:
    *          <x: value of element>.
    *
    * @return:
    *          <none>.
    */
    void append(const int x);

    /*!
    * Function: {void} erase(int i)
    * @brief:
    *          <delete element of list created at ArrayList()>.
    *
    * @param:
    *          <i: the position of element>.
    *
    * @return:
    *          <none>.
    */
    void erase(int i);

    /*!
    * Function: {int&} at(int i) const
    * @brief:
    *          <returns a reference to the element>.
    *
    * @param:
    *          <i: the position of the element>.
    *
    * @return:
    *          <reference to the element>.
    */
    int& at(int i) const;

    /*!
    * Function: {void} printList()
    * @brief:
    *          <print list to display>.
    *
    * @param:
    *          <none>.
    *
    * @return:
    *          <none>.
    */
    void print() const;

private:
    int element[MAX_last];
    int current;
    int last;
};

/*******************************************************************************
* CODE
*******************************************************************************/
int main()
{
    /* Creat list A */
    ArrayList A;
    for (int i = 1; i < 4; i++)
    {
        A.append(i);
    }
    for (int i = 3; i < 6; i++)
    {
        A.append(i);
    }
    cout << "\n\tA = ";
    A.print();
    cout << endl;

    /* empty */
    if (A.empty())
    {
        cout << "\n\tempty(A) -> true" << endl;
    }
    else
    {
        cout << "\n\tempty(A) -> false" << endl;
    }

    /* length */
    cout << "\n\tlength(A) -> " << A.length() << endl;

    /* element */
    cout << "\n\telement(A, 0) -> " << A.at(0) << endl;
    cout << "\telement(A, 2) -> " << A.at(2) << endl;

    /* insert */
    cout << "\n\tinsert(A, 2, 10) -> ";
    A.insert(10, 2);
    A.print();
    cout << endl;

    /* append */
    cout << "\n\tappend(A, -5) = ";
    A.append(-5);
    A.print();
    cout << endl;

    /* del */
    cout << "\n\tdel(A, 3) = ";
    A.erase(3);
    A.print();  
    cout << "\n\tdel(A, 1) = ";
    A.erase(1);
    A.print();
    cout << endl;

    return 0;
}

ArrayList::ArrayList()
{
    last = 0;
}

/*!
 * Function: {bool} empty() const
 * @brief:
 *          <check list created at ArrayList() empty or not>.
 *
 * @param:
 *          <none>.
 *
 * @return:
 *          < true if list empty
 *            false if list not empty >.
 */
bool ArrayList::empty() const
{
    return last == 0? true : false;
}

/*!
 * Function: {int} length() const
 * @brief:
 *          <calculate length of list created at ArrayList()>.
 *
 * @param:
 *          <none>.
 *
 * @return:
 *          <length of list>.
 */
int ArrayList:: length() const
{
    return last;
}

/*!
 * Function: {void} insert(const int x, int i)
 * @brief:
 *          <insert element to list created at ArrayList()>.
 *
 * @param:
 *          <- x: value of element
 *           - i: the position in front of the added element >.
 *
 * @return:
 *          <none>.
 */
void ArrayList::insert(const int x, int i)
{
    for (int j = last; j > i; j--)
    {
        element[j] = element[j-1];
    }
    element[i] = x;
    last++;
}


/*!
 * Function: {void} append(const int x)
 * @brief:
 *          <insert element to the end of list created at ArrayList()>.
 *
 * @param:
 *          <x: value of element>.
 *
 * @return:
 *          <none>.
 */
void ArrayList::append(const int x)
{
    element[last] = x;
    last++;
}

/*!
 * Function: {void} erase(int i)
 * @brief:
 *          <delete element of list created at ArrayList()>.
 *
 * @param:
 *          <i: the position of element>.
 *
 * @return:
 *          <none>.
 */
void ArrayList::erase(int i)
{
    for (int j = i; j < last; j++)
    {
        element[j] = element[j + 1];
    }
    last--;
}

/*!
 * Function: {int&} at(int i) const
 * @brief:
 *          <returns a reference to the element>.
 *
 * @param:
 *          <i: the position of the element>.
 *
 * @return:
 *          <reference to the element>.
 */
int& ArrayList::at(int i) const
{
    int tmp;
    tmp = element[i];
    return tmp;
}

/*!
 * Function: {void} printList()
 * @brief:
 *          <print list to display>.
 *
 * @param:
 *          <none>.
 *
 * @return:
 *          <none>.
 */
void ArrayList::print() const
{
    for (int i = 0; i < last; i++)
    {
        cout << element[i] << " ";
    }
}
