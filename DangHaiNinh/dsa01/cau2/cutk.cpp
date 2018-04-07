#include <fstream>
#include <iostream>
using namespace std;

#define MAX_LINE 10000


/***********************************************************************************************************************
* CODE
***********************************************************************************************************************/
int main()
{
    /* Read from file DAYSO2.txt */
    ifstream fileIn("DAYSO2.txt");
    int readNum[MAX_LINE];
    int count = 0;

    cout << "\n\tReading from DAYSO2.txt... ";

    while (fileIn.eof() == 0)
    {
        if (count == MAX_LINE)
        {
            cout << "\tERROR: File has more than " << MAX_LINE << " line!" << endl;
            exit(-1);
        }
        else
        {
            fileIn >> readNum[count];
            count++;
        }
    }
    fileIn.close();

    cout << "Done!"<< endl;

    /* Remove last line (last "endl") */
    count--;

    /* Enter k */
    int k;
    cout << "\n\tEnter k (1-" << count << "): ";
    cout << "k = ";
    cin >> k;

    if (k > 0 && k <= count)
    {
        /* Create file KETQUA2.txt*/
       ofstream fileOut("KETQUA2.txt");

       cout << "\n\tWriting to KETQUA2.txt... ";

       for (int i = k; i < count; i++)
        {
           fileOut << readNum[i] << endl;
        }

        for (int i = 0; i < k; i++)
        {
            fileOut << readNum[i] << endl;
        }

        fileOut.close();

        cout << "Done!"<< endl;
    }

    return 0;
}
