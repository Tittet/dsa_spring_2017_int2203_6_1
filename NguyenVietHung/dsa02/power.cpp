#include<iostream>
using namespace std;
// hàm Power tính x^n 
float Power(float x,int n){
	float power;
	if(n==0)return 1;
	if(n==1)return x;
	if(n>1){
		power=Power(x,n/2);
		if((n%2)!=0)return power*power*x;
		if((n%2)==0)return power*power;
	}
}
int main(){
	int n;
	float x;
	cout<<"Nhap x=";
	cin>>x;
	cout<<"\nNhap n=";
	cin>>n;
	cout<<"\nPower bang: "<<Power(x,n);
	cin.ignore();
	cin.get();
}
