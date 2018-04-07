#include <fstream>
 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 using namespace std;

 int main()
 {
     srand(time(NULL));
     ofstream file("DAYSO1.txt");
     int n = rand()%100;
     file << n << endl;
     for (int i = 0; i < n; i++)
     {
         int number = rand();
         file << number << endl;
     }
     return 0;
 }
