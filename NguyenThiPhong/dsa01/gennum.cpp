#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
int main(){
	ofstream op;
	op.open("DAYSO1.txt");
	int n = rand();
	op << n << endl;
	while(n>0){
		int num = rand();
		op << num << endl;
		n--;
	}
	op.close();
	return 0;
	
}
