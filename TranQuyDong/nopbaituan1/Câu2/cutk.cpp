#include<iostream >
#include<time.h>
#include<fstream>
#include<cstdlib>
using namespace std;
void doc(int n,int a[100],int k)
{
	int b[100];
	ifstream ifs("dayso2.txt",ios::in);
	ifs>>n;
	for(int i=0;i<n;i++)
	{
		ifs>>a[i];
		b[i]=a[i];
	}
	ifs.close();
	cout<<"Chon so k:";
	cin>>k;
	ofstream open("ketqua2.txt",ios::out);
	for(int i=k;i<n;i++){
		open<<b[i]<<endl;
	}
	for(int i=0;i<k;i++){
		open<<b[i]<<endl;
	}
	open.close();
}
main(){
	int n,a[100],k;
	doc(n,a,k);
}










