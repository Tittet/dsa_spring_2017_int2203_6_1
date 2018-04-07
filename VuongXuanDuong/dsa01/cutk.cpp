#include<fstream>
#include<iostream>
#include<ctime>
#include <vector>
using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("DAYSO2.txt");
    out.open("KETQUA2.txt");
    int n, k, a,j;
    vector<int> list;
    cout << "Reading..." << endl;
    while(infile >> a) {
		list.push_back(a);
    }
    n = list.size();
    while(k<=0||k>n) {
        cout << "Nhap vao k: ";
        cin >> k;
    }
    cout << "Writing..." << endl;
    for(j=k;j<n;j++) {
        out << list[j] << endl;}
    for(i=0;j<k;j++) {
        out<< list[j] << endl;
    }
    in.close();
    out.close();
    return 0;
}
