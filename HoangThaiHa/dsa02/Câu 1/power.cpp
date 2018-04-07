
#include<iostream>
using namespace std;
float pw(float x,int n){
     float gt;
     if(n==0) return 1;
     if(n==1) return x;
     if(n>1){
             gt=pw(x,n/2);
             if(n%2!=0)  return gt*gt*x;
             if(n%2==0)  return gt*gt;
     }
}     
int main()
{
    int n;
    float x;
    cout<<"\n Nhap vao x:";cin>>x;
    cout<<"\n Nhap vao n:";cin>>n;
    cout<<"\nGia tri cua "<<x<<" ^"<<n<<" la:"<<pw(x,n);
    cin.ignore();
    cin.get();
}
