#include <fstream>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
	/* Create file DAYSO1.txt*/
    ofstream fileOut("DAYSO1.txt");

    /* Randon n 1-100 */
    srand(time(NULL));
    int n = rand() % 100 +1;

    cout << "\n\tWriting " << n << " numbers to DAYSO1.txt" << endl;

    /* Print to DAYSO1.txt */
    fileOut << n << endl;
    for (int i = 0; i < n; i++)
    {
    	int num = rand();
        fileOut << num << endl;
    }
    cout << "\tDone!" << endl;

    return 0;   
}
