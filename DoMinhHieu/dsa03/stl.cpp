#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main(){
	vector<int> A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(3);
	A.push_back(4);
	A.push_back(5);
	
	cout<<"empty(A) -> "<<(A.empty()?"true":"false")<<endl;
	cout<<"length(A) ->"<<A.size()<<endl;
	cout<<"element(A,0) ->"<<A[0]<<endl;
	cout<<"element(A,2) ->"<<A[2]<<endl;
	
	//Insert
	A.insert(A.begin()+2,10);
	
	//In ra mang A
	cout<<"isert(A,2,10) -> A(";
	for(int i=0;i<A.size()-1;i++)
	{
		cout<<A[i]<<",";
	}
	cout<<A[A.size()-1];  
	cout<<")"<<endl;
	
	A.push_back(-5);
	//In ra mang A
	cout<<"isert(A,2,10) -> A(";
	for(int i=0;i<A.size()-1;i++)
	{
		cout<<A[i]<<",";
	}
	cout<<A[A.size()-1];  
	cout<<")"<<endl;
	//Xoa phan tu thu 3
	A.erase(A.begin()+3);

	//In ra mang A
	cout<<"isert(A,2,10) -> A(";
	for(int i=0;i<A.size()-1;i++)
	{
		cout<<A[i]<<",";
	}
	cout<<A[A.size()-1];  
	cout<<")"<<endl;
	
	//Xoa phan tu thu 1
	A.erase(A.begin()+1);
	//In ra mang A
	cout<<"isert(A,2,10) -> A(";
	for(int i=0;i<A.size()-1;i++)
	{
		cout<<A[i]<<",";
	}
	cout<<A[A.size()-1];  
	cout<<")"<<endl;
	
	
	
	
}
