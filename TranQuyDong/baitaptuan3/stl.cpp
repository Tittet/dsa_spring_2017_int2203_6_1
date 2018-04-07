#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> A){
	cout<<"A=(";
		for(int i=0;i<A.size()-1;i++){
			cout<<A[i]<<",";
		}
		cout<<A[A.size()-1];
		cout<<")"<<endl;
}

main(){
	vector<int> A;
	int n=6;
	int gt;
    for(int i = 0 ; i<n; i++) {
        cin>>gt;
    	A.push_back(gt) ;
    }
	print(A);
	if(A.empty()){
		cout<<"empty(A)-> true"<<endl;
	}
	else
		cout<<"empty(A)-> false"<<endl;
		
	cout<<"length(A)-> "<<A.size()<<endl;
	
	cout<<"element(A,0)-> "<<A.at(0)<<endl;	
	
	cout<<"element(A,2)-> "<<A.at(2)<<endl;
	
	A.insert(A.begin()+2,10);
	cout<<"insert(A,2,10)-> ";
	print(A);
	
	A.push_back(-5);
	cout<<"append(A,-5)-> ";
	print(A);
	
	A.erase(A.begin()+3);
	cout<<"del(A,3)-> ";
	print(A);
	
	A.erase(A.begin()+1);
	cout<<"del(A,1)-> ";
	print(A);
}
