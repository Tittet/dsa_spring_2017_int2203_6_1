#include<iostream>
using namespace std;

double pow(double a, int b){
	if(b==0) return 1;
	if(b==1) return a;
	if(b%2) 
		return pow(a,b/2)*pow(a,b/2)*a;
	else
		return pow(a,b/2)*pow(a,b/2);
}

int main(){
	double x;
	int n;   // Tinh x^n
	cout << "Nhap x,n = " << endl;
	cin >> x >> n;
	
	cout << x << "^" << n << "=" << pow(x,n);
	return 0;
}
