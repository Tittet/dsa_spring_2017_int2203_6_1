#include<stdio.h>
#include<iostream>
using namespace std;
int power(int x, int n){
	
	if (n==1){
		return x;
	}
	if(n==0){
		return 1;
	}
	if((n%2)==0){
		return power(x*x,n/2);
	}
	else{
		return x*power(x,n-1);
	}
	
}

main(){
	int x,n,s;
	cout<<"nhap vao so x:";
	cin>>x;
	cout<<"nhap vao so mu n:";
	cin>>n;
	cout<<"x^n="<<power(x,n);
}
