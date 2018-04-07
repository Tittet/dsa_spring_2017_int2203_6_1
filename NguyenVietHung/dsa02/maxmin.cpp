#include<iostream>
using namespace std;
int main()
{
    int n,i,m,a[100],min,max,max1,min1;
    cout<<"Nhap so phan tu cua day: ";
	cin>>n;
// nhap các so trong mang de so sánh,bo qua ô a[0]
    for(i=1;i<=n;i++){
    	int x;
    	cin>>x;
    	a[i]=x;
    }
    m=n/2; //m,n là kieu nguyên nên m=n/2 se lay phan nguyen cua phép chia n/2
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
    if(n==(2*m+1)){ // TH n là so le
    	max=(max>a[n])?max:a[n];
        min=(min<a[n])?min:a[n];
    }
    cout<<"\nGia tri lon nhat:"<<max;
    cout<<"\nGia tri nho nhat:"<<min;
    cin.ignore();
    cin.get();
}
