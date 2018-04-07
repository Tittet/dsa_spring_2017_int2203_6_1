#include <fstream>
#include <iostream>
 using namespace std;

 void swap(int& a, int& b)
 {
     int temp = a;
     a = b;
     b = temp;
 }

 int main()
 {
     ifstream file("DAYSO1.txt");
     int n;
     file >> n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
         file >> a[i];
     }

     for (int i = 0; i < n - 1; i++)
     {
         for (int j = i + 1; j < n; j++)
         {
            if (a[i] < a[j])
             {
                 swap(a[i], a[j]);
             }
         }
     }
     cout << "Enter k: " << endl;
     int k;
     cin >> k;
     if (k < n)
     {
         cout << a[k] << endl;
     }

     return 0;
 }
