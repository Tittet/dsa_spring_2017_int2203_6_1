#include<cstdlib>
#include<ctime>
#include<fstream>
#include<iostream>
using namespace std;

int main() {
    ofstream outfile;
    outfile.open("DAYSO1.txt");
    srand(time(NULL));
    int n = rand() % 100 + 1;
    outfile << n << endl;
    for(int i=0;i<n;i++) {
        outfile << rand() %100 + 1 << endl;
    }
    outfile.close();
    return 0;
}
