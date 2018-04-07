#include<iostream>
#include<stdlib.h>

using namespace std;

#define MAX_ARRAY 100

int main(){
	int n,line_max,line=0, inc = 0,k;
	int A[MAX_ARRAY][MAX_ARRAY],B[MAX_ARRAY*MAX_ARRAY],C[MAX_ARRAY];
	
	cout << "Nhap kich thuoc ma tran A nxn: " ;
	cin >> n;
	while(n<=0) {
		cout << "Nhap lai:";
		cin >> n;
	}

	for(int i=0;i<n;i++){
		k = rand()%(n+1);
		for(int j=0;j<k;j++) A[i][j] = 1;
		for(int j=k;j<n;j++) A[i][j] = 0;
	}	
	
	for(int i = 0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << A[i][j] << " ";
			B[i*n+j] = A[i][j]; // chuyen ma tran 2 chieu thanh 1 mang
		}
		cout << "\n";
	}
	
	for(int i=0;i<n*n;i++){
		if(B[i]==1) inc++;
		if((i+1) % n == 0){
			C[line++]=inc;
			inc = 0;
		}
	}

	int max=C[0];
	for(int i=1;i<line;i++)
		if(C[i]>max)
			max = C[i];
	
	max == 0 ? cout << "Ma tran khong chua so 1" : cout << "Dong co nhieu so 1 nhat la: " << endl;
	for(int i=0;i<n;i++){
		if(C[i] == max)
			cout << i+1 << endl;
	}
	
	return 0;
	
}
