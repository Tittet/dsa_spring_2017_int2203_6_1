#include<iostream>
using namespace std;
	long dequy( int n,int x){
    if(n == 0) return 1;
    if(n == 1) return x;
    long tg = dequy(n/2,x);
    return (n % 2 == 1) ? (tg * tg * x) : (tg * tg);
}
int main(){
	int x,n;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	cout << dequy(n,x);
	return 0;
	}
	
	
