#include <iostream>
#define ARRAY = 100
using namespace std;

int main(){
	int n, a[ARRAY], min, max, min1, max1;
	cout << "Nhap so phan tu cua day: " << n;
	cin >> n;
	int m = n/2;
	if(n!= (2*m + 1)){
	if(a[1] < a[2]){
		min = a[1];
		max = a[2];
	}
	else{
		max = a[2];
		min = a[1];
	}
	
	for(int i = 1; i < m; i++){
		if(a[2*i - 1] <= a[a*i]){
			min1 = a[2*i];
			max1 = a[2*i - 1];
		}
		else{
			min1 = a[2*i - 1];
			max1 = a[2*i];
		}
	}
	}
	else{
		min = (min < a[n])? min: a[n];
		max = (max > a[n])? max: a[n];
	}
	cout << "\n Gia tri nho nhat cua chuoi la: " << min;
	cout << "\n Gia tri lon nhat cua chuoi la: " << max;
