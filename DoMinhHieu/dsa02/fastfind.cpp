#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i,j,max;
	i=0;
	j=0;
	int n=5;
	int arr[5][5]={ 1,1,1,0,0,
					1,1,1,1,0,
					1,0,0,0,0,
					0,0,0,0,0,
					1,1,1,0,0
					
			
		};
		
		while(1)
		{
			if(arr[i][j]==0) 
			
				i++;
			else
			{
				j++;
				max=i;
			}
			if(i==n-1||j==n-1) break;
		}
		
		cout<<max+1;
		
		return 0;
}
