#include <iostream>
#include <random>
#include <ctime>
using namespace std;

/*******************************************************************************
* API
*******************************************************************************/
/*!
 * Function: {void} minmax(int arr[],int head, int tail,int &min, int &max)
 * @brief:
 *          <find min max value>.
 *
 * @param:
 *          <- arr[]: array want to find max, min.
 *           - head: head of array.
 *           - tail: tail of array.
 *           - &min: adress used to save min value.
 *           - &max: adress used to save max value. >.
 *
 * @return:
 *          <none>.
 */
void minmax(int arr[],int head, int tail,int &min, int &max);

/*******************************************************************************
* CODE
*******************************************************************************/
int main()
{
    /* Random n 1-100 */
    srand(time(NULL));
    int n = rand() % 100 +1;
    int arr[n];
    /* Random array */
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000 + 1;
    }

    /* First max, min value */
    int min = arr[0];
    int max = arr[n-1];

    /* Find max, min */
    minmax(arr, 0, n-1, min, max);

    /* Print */
    cout << "\n\tMax = " << max << endl;
    cout << "\n\tMin = " << min << endl;

    cout << "\n\tNumber of calculations: " << 3*n/2 - 2 << endl;
    cout << "\n\tMaximum number of calculations: " << 3*n/2 << endl;

    return 0;
}

/*!
 * Function: {void} minmax(int arr[],int head, int tail,int &min, int &max)
 * @brief:
 *          <find min max value>.
 *
 * @param:
 *          <- arr[]: array want to find max, min.
 *           - head: head of array.
 *           - tail: tail of array.
 *           - &min: adress used to save min value.
 *           - &max: adress used to save max value. >.
 *
 * @return:
 *          <none>.
 */
void minmax(int arr[],int head, int tail,int &min, int &max)
{
    /* Divide and conquer */
    int min1, min2, max1, max2;
    if(head == tail)
    {
        min = arr[head];
        max = arr[head];
    }
    else
    {
        minmax(arr, head, (head + tail) / 2, min1, max1);
        minmax(arr, (head + tail) / 2 + 1, tail, min2, max2);
        if (min1 < min2)
        {
            min = min1;
        }
        else
        {
            min = min2;
        }
        if (max1 > max2)
        {
            max = max1;
        }
        else
        {
            max = max2;
        }
    }
}

/*******************************************************************************
* Time Complexity Calculation
-----------------------------
* n = 1: T(n) = 0
* n = 2: T(n) = 2
* n = 2^k: T(n) = 2 + 2*T(n/2) = ... = (3n)/2 - 2
*******************************************************************************/