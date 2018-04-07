#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
    ifstream f;
    f.open("DAYSO2.txt");
    int a[10000];
    int i = -1;
    while (!f.eof()){
        i++;
        f >> a[i];
    }
    int n = i + 1;

    f.close();
    cout << "xong" << endl << n;

    ofstream f2;
    f2.open("KETQUA2.txt");
    int k;
    cout << "nhap k:";
    cin >> k;
    for (int i = k; i < n; i++){
        f2 << a[i] << endl;
    }
    for (int i = 0; i < k; i++){
        f2 << a[i] << endl;
    }
    f2.close();
    cout << "xong";

	return 0;
}

