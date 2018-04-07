#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int n,i,m,a[100],min,max,max1,min1;
    cout<<"\nNhap so phan tu cua day:";cin>>n;
    srand(time(0));
    for(i=1;i<=n;i++) {
                      a[i]=rand()%1000;
                      cout<<a[i]<<"  ";
    }
    m=n/2;
    if(a[1]>a[2]){
                  max=a[1];
                  min=a[2];
    }
    else {
         max=a[2];
         min=a[1];
    }
    for(i=2;i<=m;i++){
         if(a[2*i-1]>=a[2*i]){
                             max1=a[2*i-1];
                             min1=a[2*i];
         }
         else{
              max1=a[2*i];
              min1=a[2*i-1];
         }
         max=(max>max1)?max:max1;
         min=(min<min1)?min:min1;
    }
    if(n==(2*m+1)){
                  max=(max>a[n])?max:a[n];
                  min=(min<a[n])?min:a[n];
    }
    cout<<"\nGia tri lon nhat:"<<max;
    cout<<"\nGia tri nho nhat:"<<min;
    return 0;
}
