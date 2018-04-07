#include<ctime>
#include<fstream>
#include <stdlib.h>
#include<iostream>
using namespace std;

void sort(int a[], int len) {
    int i, j;
    int temp;
    for (i=0;i<len-1;i++) {
        for(j=i+1;j<len; j++) {
            if(a[i]<a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main() {
    ifstream infile;
    infile.open("DAYSO1.txt");
    int i = 0, k, num, a;
    infile >> num;
    int A[num];
    while(infile >> a) {
		A[i++] = a;
    }
    sort(A, num);
    while(k<=0||k>num) {
        cout << "Nhap vao k: ";
        cin >> k;
    }
    cout << "So lon nhat: " << A[0] << endl;
    cout << "So lon thu hai: " << A[1] << endl;
    cout << "So lon thu " << k << ": " << A[k-1] << endl;
    return 0;
}

