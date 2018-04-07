#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream.h>
void random(int n, int a[100]){
	n=rand()%30+1;
	count<<"So ngau nhien duoc sinh ra la:" ;cout<<n<<endl;
	for(int i=0;i<n;i++){
		a[i]=rand()%30+1;
		cout<<a[i]<<endl;
	}
}
void writefile(int n, int a[100]){
	
}
