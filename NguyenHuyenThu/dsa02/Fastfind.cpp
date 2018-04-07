#include<iostream>
#include<fstream>
#include <cstdlib> 

using namespace std;
int main()
{
    int a[20][20],i,j,n,k,max;
    cout<<"\nNhap cap cua ma tran:";
    cin>>n;
    for(i=0;i<n;i++){                              
                     k=rand()%n+1;                  
                     for(j=0;j<k;j++) a[i][j]=1;
                     for(j=k;j<n;j++) a[i][j]=0;
    }
    cout<<"\nMa tran vua tao:\n";                    
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++) cout<<a[i][j]<<"  ";
                     cout<<"\n";
    }
    i=0;j=0;
    while(1){
             if(a[i][j]==0) i++;
              else {
                   j++;
                   max=i;
              }
             if(i==n-1||j==n-1) break;
    }
    cout<<"\nHang chua nhieu so 1 nhat la hang thu: "<<max+1;
    cin.ignore();
    cin.get();
}

