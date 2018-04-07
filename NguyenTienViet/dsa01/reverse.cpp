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
    f2.open("KETQUA1.txt");

    for (int i = n - 1; i >= 0; i--){
        f2 << a[i] << endl;
    }
    f2.close();
    cout << "xong";

	return 0;
}
