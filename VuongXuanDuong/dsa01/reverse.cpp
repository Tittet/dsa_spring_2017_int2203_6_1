#include<iostream>
#include<ctime>
#include<fstream>
#include <vector>

using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("DAYSO2.txt");
    out.open("KETQUA1.txt");
    int i, n;
    vector<int> list;
    cout << "Reading..." << endl;
    while(in >> n) {
		list.push_back(n);
    }
    cout << "Writing..." << endl;
    for(i=list.size()-1;i>=0;i--) {
        out << list[i] << endl;
    }
    in.close();
    out.close();
    return 0;
}
