#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream ip("DAYSO2.txt");
	int n=0;
	int a[10000];
	int x;
	while(ip>>x){
		a[n] = x;
		n++;
	}
	ip.close();
	ofstream op;
	op.open("KETQUA1.txt");
	for(int i=n-1;i>=0;i--){
		op << a[i] << endl;
	}
	op.close();
	return 0;
}
