#include <iostream>
using namespace std;

/*******************************************************************************
* API
*******************************************************************************/
/*!
 * Function: {int} pow(int a, int n)
 * @brief:
 *          <calculate x^n>.
 *
 * @param:
 *          <number x & n want to calculate>.
 *
 * @return:
 *          <number x^n>.
 */
int pow(int a, int n);

/*******************************************************************************
* CODE
*******************************************************************************/
int main()
{
    /* Input x & n */
	int x,n;
	cout << "\n\tx = ";
	cin >> x;

	cout << "\n\tn = ";
	cin >> n;

    /* Print result */
	cout << "\n\tx^n = " << pow(x, n);

	return 0;
}

/*!
 * Function: {int} pow(int a, int n)
 * @brief:
 *          <calculate x^n>.
 *
 * @param:
 *          <number x & n want to calculate>.
 *
 * @return:
 *          <number x^n>.
 */
int pow(int x, int n)
{
	if (n == 0) return 1;

    /*
    x^n =
        + x^(n/2) * x^(n/2) if n is an even number
        + x^(n/2) * x^(n/2) * x if n is an odd number
    */
    int tmp = pow(x, n/2);
    if (n % 2 == 0)
    {
    	return tmp * tmp;
    }
    else
    {
    	return tmp * tmp * x;
    }
}

/*******************************************************************************
* Time Complexity Calculation
-----------------------------
T(n)= T(n/2)+O(1)
Complexity = O(logn)
*******************************************************************************/