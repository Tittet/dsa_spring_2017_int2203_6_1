#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void reverse(int a[], int size){
	int temp;
	for (int i = 0; i< size/2; i++){
		temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i -1] = temp;
	}
	}
void print(int a[], int size){
	for(int i = 0; i<size; i++){
		cout << a[i] << "\n";
	}
	}
int main(){
	ifstream file("DAYSO2.txt");
	ofstream file1("KETQUA1.txt");
	int n; int a[n];
	for(int i = 0; i < n; i++){
		file >> a[i];
	}
	reverse(a,n);
	print(a,n);
	return 0;
	}

