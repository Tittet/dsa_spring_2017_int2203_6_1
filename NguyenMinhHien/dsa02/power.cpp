#include<iostream>

using namespace std;

int p(int x, int n){
	int power;
	if(n == 0)
	return 1;
	
	if(n == 1)
	return x;
	
	if(n > 1) {
		power = p(x,n/2);
		if (n%2 = 0)
		return power * power;
		else
		return power * power * x;
	}
}
	int main() {
		int x, int n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << x << "^" << n <<"= " << p(x,n);
		return 0;
	}
