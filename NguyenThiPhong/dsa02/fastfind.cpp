#include<iostream>
using namespace std;
int main(){
	int A[100][100], i,j,n, max;
	cout << "nhap vao cap cua ma tran: ";
	cin >> n;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			cout << "A[" << i << "][" << j << "]";
			cin >> A[i][j];}
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			cout <<A[i][j] << "\t";}
		cout << endl;}
	j = 1;
	i = 1;
	while (j <= n && i <=n){
		if (A[i][j] == 0){
			if (A[i][j-1] == 1)	max = i;
			i++;}
		if (A[i][j] == 1 && j == n) {
			max = i;
			break;}
		j++;}
	cout << "hang chua nhieu phan tu 1 nhat la: " << max;
	return 0;
}
