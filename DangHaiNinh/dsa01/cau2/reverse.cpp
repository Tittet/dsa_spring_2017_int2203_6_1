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

    /* Create file KETQUA1.txt*/
    ofstream fileOut("KETQUA1.txt");

    cout << "\n\tWriting to KETQUA1.txt... ";

    for (int i = count - 1; i >= 0; i--)
    {
        fileOut << readNum[i] << endl;
    }
    fileOut.close();

    cout << "Done!"<< endl;

    return 0;
}
