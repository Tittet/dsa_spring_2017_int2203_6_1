#include<iostream>
using namespace std;
float pw(float x,int n){
     float k;
     if(n==0) return 1;
     if(n==1) return x;
     if(n>1){
             k=pw(x,n/2);
             if(n%2!=0)  return k*k*x;
             if(n%2==0)  return k*k;
     }
}
int main()
{
    int n;
    float x;
    cout<<"\nVao x:";cin>>x;
    cout<<"\nVao n:";cin>>n;
    cout<<"\nGia tri cua "<<x<<" ^"<<n<<" la:"<<pw(x,n);
    return 0;
}
