#include <iostream>
#include <random>
#include <ctime>
using namespace std;

#define arraySize 10

int rowMax_1(int a[][arraySize])
{ 
    int j = 0; 
    while (a[0][j] == 1 && j < arraySize )
    {
        j++;
    } 
     
    int row = 0;
    for (int i = 1; i < arraySize; i++)
    {
        while (a[i][j] == 1 && j < arraySize )
        { 
            j++; 
            row = i + 1;
        }
    } 
    return row; 
}

void printArray(int a[][arraySize])
{
    cout << "\n\tARRAY:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cout << "\t" << a[i][j] << "    ";
        }
    cout << endl;
    }
}

int main() 
{ 
     int arr[arraySize][arraySize];
     /* Random array */
     srand(time(NULL));
     for (int i = 0; i < arraySize; i++)
     {
     	
         int k = rand() % arraySize + 1;
         for (int j = 0; j < k; j++)
         {
             arr[i][j] = 1;
         }
         for (int j = k; j < arraySize; j++)
         {
             arr[i][j] = 0;
         }
     } 

    printArray(arr);

    cout << "\n\tRow has the most number 1: ";
    cout << rowMax_1(arr); 

    return 0; 
}
