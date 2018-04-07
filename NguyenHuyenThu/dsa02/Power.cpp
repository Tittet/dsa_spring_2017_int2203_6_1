#include<iostream>

using namespace std;
 main()
{
	int x,n;
	cout<<"Nhap vao co so: ";
	cin>>x;
	cout<<endl;
	cout<<"Nhap vao so mu: ";
	cin>>n;
	cout<<endl;
	int pow(int x, int n);
	cout<<"Ket qua: "<<pow(x,n);
	}
	int pow(int x, int n)
	{
		if(n==1)
		{
		return x;
		}
		else {
		
			if(n%2==0){
			return pow(x, n/2) * pow(x, n/2);
			}
			else
			return pow(x, n/2) * pow(x, n/2) * x;
			
			
		}
	}
