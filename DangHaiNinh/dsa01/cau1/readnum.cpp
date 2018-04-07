#include <fstream>
#include <iostream>
using namespace std;

/*******************************************************************************
* Variable
*******************************************************************************/
int n;

/*******************************************************************************
* API
*******************************************************************************/

/*!
 * Function: {void} swap(int &a, int &b)
 * @brief:
 *          <swap two value>.
 *
 * @param:
 *          <number a & b want to swap>.
 *
 * @return:
 *          <none>.
 */
void swap(int &a, int &b);

/*!
 * Function: {void} sort(int *arr)
 * @brief:
 *          <sort array largest to smallest using bubble sort>.
 *
 * @param:
 *          <array want to swap>.
 *
 * @return:
 *          <none>.
 */
void sort(int *arr);


/*******************************************************************************
* CODE
*******************************************************************************/
int main()
{
    /* Read from file DAYSO1.txt and print to screen*/
    ifstream fileIn("DAYSO1.txt");
    fileIn >> n;
    cout << "\n\t" << n << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        fileIn >> arr[i];
        cout << "\t" << arr[i] << endl;
    }
    fileIn.close();

    /* Sort array largest to smallest */
    sort(arr);
    
    cout << "\t--" << endl;

    /* Find the k'th largest number */
    int k;
    cout << "\tEnter k (1-" << n << "): ";
    cout << "k = ";
    cin >> k;

    if (k > 0 && k <= n)
    {
        cout << "\tThe k'th largest number is: " << arr[k - 1] << endl;
    }

    return 0;
}

/*!
 * Function: {void} swap(int &a, int &b)
 * @brief:
 *          <swap two value>.
 *
 * @param:
 *          <number a & b want to swap>.
 *
 * @return:
 *          <none>.
 */
void swap(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

/*!
 * Function: {void} sort(int *arr)
 * @brief:
 *          <sort array largest to smallest using bubble sort>.
 *
 * @param:
 *          <array want to swap>.
 *
 * @return:
 *          <none>.
 */
void sort(int *arr)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                swap(*(arr + i), *(arr + j));    
            }
        }
    }
}