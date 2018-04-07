#include<stdio.h>
#include<iostream>
#define kich_thuoc 100
using namespace std;
void add(int a[], int &n,int k){
	a[n]=k;
	n++;
}
void minmax(int a[],int n){
	int bigList[100],smallList[100];
	int lenght1=0,lenght2=0;
	for(int i=1;i<n;i=i+2){
		if(a[i]>a[i-1]){
			add(bigList,lenght1,a[i]);
			add(smallList,lenght2,a[i-1]);
		}
		else{
			add(bigList,lenght1,a[i-1]);
			add(smallList,lenght2,a[i]);
		}
	}
	if(n%2==1){
		if(a[n-1]>a[n-2]){
			add(bigList,lenght1,a[n-1]);
		}
		else{
			add(smallList,lenght2,a[n-1]);
		}
	}
	int max=bigList[0], min=smallList[0];
	for(int i=1;i<lenght1;i++){
		if(bigList[i]>max){
			max=bigList[i];
		}
	}
	for(int i=1;i<lenght2;i++){
		if(smallList[i]<min){
			min=smallList[i];
		}
	}
	cout<<"Max:"<<max;
	cout<<"\nMin:"<<min;
}
main(){
	int a[100],n;
	cout<<"Nhap vao so luong phan tu mang:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	minmax(a,n);
}
