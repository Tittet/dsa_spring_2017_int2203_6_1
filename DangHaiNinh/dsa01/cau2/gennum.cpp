#include <fstream>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
	/* Create file DAYSO1.txt*/
    ofstream file("DAYSO2.txt");

    /* Random n 1-100 */
    srand(time(NULL));
    int n = rand() % 100 +1;

    cout << "\n\tWriting " << n << " numbers to DAYSO2.txt" << endl;

    /* Print to DAYSO1.txt */;
    for (int i = 0; i < n; i++)
    {
    	int num = rand() % 10000 + 1;
        file << num << endl;
    }
    cout << "\tDone!" << endl;

    return 0;   
}
