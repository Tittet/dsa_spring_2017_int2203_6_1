#include<ctime>
#include<fstream>
#include <vector>
#include<iostream>
using namespace std;

int main() {
    ifstream infile;
    infile.open("DAYSO2.txt");
    ofstream outfile;
    outfile.open("KETQUA2.txt");
    int n, k, i, a;
    vector<int> A;
    while(infile >> a) {
		A.push_back(a);
    }
    n = A.size();
    while(k<=0||k>n) {
        cout << "Nhap vao k: ";
        cin >> k;
    }
    for(i=k;i<n;i++) {
        outfile << A[i] << endl;
    }
    for(i=0;i<k;i++) {
        outfile << A[i] << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
