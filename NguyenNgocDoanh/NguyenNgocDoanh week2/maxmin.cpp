#include<iostream>
#include<stdlib.h>

#define MAX_ARRAY 1000

using namespace std;

int main(){
	int n,max,min,max1,min1,A[MAX_ARRAY];
	cout << "Nhap so phan tu cua mang n = ";
	cin >> n;
	while(n<2){
		cout << "Nhap lai: n = ";
		cin >> n;
	}
	for(int i=0;i<n;i++){
		A[i] = rand()%1000;
		cout << A[i] << " ";
	}
	if(A[1]>A[0]){
		max = A[1];
		min = A[0];
	}
	else {
		max = A[0];
		min = A[1];
	}
	int m = n/2;
	for(int i=2;i<=m;i++){
		if(A[i*2-2] > A[i*2-1]){ // 2 3;
			max1 = A[i*2-2];
			min1 = A[i*2-1];
		}
		else {
			max1 = A[i*2-1];
			min1 = A[i*2-2];
		}
		max = (max > max1 ? max : max1);
		min = (min < min1 ? min : min1);
	}
	if(n== (2*m+1)){
		max = (max > A[n-1] ? max : A[n-1]);
		min = (min < A[n-1] ? min : A[n-1]);
	}
	cout << "\nMin = " << min << " \nMax = " << max << endl;
	if(n%2){
		cout << "So phep so sanh = " << 3*m-1 << endl;
		cout << "So phep so sanh toi da = " << 3*n/2 << endl;
	}
	else {
		cout << "So phep so sanh = " << 3*m-2 << endl;
		cout << "So phep so sanh toi da = " << 3*n/2-1 << endl;
	}
	return 0;
}
