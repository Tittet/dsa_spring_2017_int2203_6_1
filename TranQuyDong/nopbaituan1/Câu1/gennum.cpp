#include<iostream >
#include<time.h>
#include<fstream>
#include<cstdlib>
using namespace std;
void ngaunhien(int &n,int a[100])
{
	srand(time(NULL));
	n=rand()%30+1;
     cout<<"so ngau nhien dc sih ra la :"	;cout<<n<<endl;
     for(int i=0;i<n;i++)
     {
     	a[i]=rand()%30+1;
     	cout<<a[i]<<endl;
	 }
}
void  ghi(int n,int a[100])
{
	ofstream ofs("dayso1.txt",ios::out);
	ofs<<n<<endl;
	for(int i=0;i<n;i++)
	{
		ofs<<a[i]<<endl;
	}
	ofs.close();
}
main()
{
	int n,a[100];
	ngaunhien(n,a);
	ghi(n,a);
}
