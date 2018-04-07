#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream ip("DAYSO2.txt");
	int k;
	cin >> k;
	int n=0;
	int a[10000];
	int x;
	while(ip>>x){
		a[n] = x;
		n++;
	}
	ip.close();
	ofstream op;
	op.open("KETQUA2.txt");
	for(int i=k+1;i<n;i++){
		op << a[i] << endl;
	}
	for(int i=0;i<=k;i++){
		op << a[i] << endl;
	}
	op.close();
	return 0;
}
