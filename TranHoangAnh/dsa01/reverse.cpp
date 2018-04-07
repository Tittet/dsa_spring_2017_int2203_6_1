#include<ctime>
#include<fstream>
#include <vector>
#include<iostream>
using namespace std;

int main() {
    ifstream infile;
    infile.open("DAYSO2.txt");
    ofstream outfile;
    outfile.open("KETQUA1.txt");
    int n;
    vector<int> A;
    while(infile >> n) {
		A.push_back(n);
    }
    for(int i=A.size()-1;i>=0;i--) {
        outfile << A[i] << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}

