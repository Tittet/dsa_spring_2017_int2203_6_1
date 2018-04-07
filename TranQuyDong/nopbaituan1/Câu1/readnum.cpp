#include<iostream >
#include<time.h>
#include<fstream>
#include<cstdlib>
using namespace std;
void doc(int n,int a[100]){
	int b[100];
	ifstream ifs("dayso1.txt",ios::in);
	ifs>>n;
	for(int i=0;i<n;i++){
		ifs>>a[i];
		b[i]=a[i];
	}
	ifs.close();
	
	int max=0,max2=0;
	for(int i=0;i<n;i++){
		if(b[i]>max){
			max=b[i];
		}
		
	}
	cout<<"gia tri lon nhat cua day la :"<<max<<endl;
	for(int i=0;i<n;i++){
		if(b[i]>max2&&b[i]!=max){
			max2=b[i];
		}
	}
	cout<<"so lon thu 2 cua day la:"<<max2<<endl;
	int x;
	cout<<"nhap vao so lon thu x ma ban muon :";cin>>x;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]>b[j]){
				int m=b[i];
				b[i]=b[j];
				b[j]=m;
			}
		}
	}
	cout<<"phan tu ma ban muon tim la:"<<b[n-x];
	
}
main(){
	int n,a[100];
	doc(n,a);
}










