#include<vector>
#include<iostream>
using namespace std;
int main(){
	//khoi tao vecto A
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(3);
    A.push_back(4);
    A.push_back(5);
    //in ra vecto A
    cout<<"Vecto A=[ ";
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<"]\n";
    cout<<A.empty()<<"\n";
    cout<<"size A="<<A.size()<<"\n";
    cout<<"Phan tu A[0]="<<A.at(0)<<"\n";
    cout<<"Phan tu A[2]="<<A.at(2)<<"\n";
    //chen phan tu 10 v�o vi tr� th? 2 trong vecto
    A.insert(A.begin() + 2, 10);
    cout<<"insert(A,2,10)=[ ";
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<"]\n";
    //th�m 5 v�o cu�i
    A.push_back(-5);
    cout<<"append(A,5)=[ ";
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<"]\n";
    //xo� phan tu o v? tr� thu 3 v� 1
    A.erase(A.begin() + 3);
    cout<<"del(A,3)=[ ";
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<"]\n";
    A.erase(A.begin() + 1);
    cout<<"del(A,1)=[ ";
    for(int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout<<"]\n";
    return 0;
}
