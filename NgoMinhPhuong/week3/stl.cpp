#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> A ;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(3);
	A.push_back(4);
	A.push_back(5);
	
	cout << "A =(";
	for(int i = 0 ; i < A.size() ; i++){
		cout << A[i] << " " ;
	}
	cout << ")" <<endl;
	
	cout << "empty(A)??:" << A.empty() << endl;
	cout << "Lenght(A):" << A.size() << endl;
	cout << "Element(A,0):" << A[0] << endl;
	cout << "Element(A,2):" << A[2] << endl;
	
	A.insert(A.begin()+2,10);
	cout << "insert(A,2,10) - > ";
	cout << "A =(";
	for(int i = 0 ; i < A.size() ; i++){
		cout << A[i] << " " ;
	}
	cout << ")" <<endl;
	//
	A.push_back(-5);
	cout << "append(A,-5) -> ";
	cout << "A =(";
	for(int i = 0 ; i < A.size() ; i++){
		cout << A[i] << " " ;
	}
	cout << ")" <<endl;
	//
	A.erase(A.begin()+3);
	cout << "del(A,3) -> " ;
	cout << "A =(";
	for(int i = 0 ; i < A.size() ; i++){
		cout << A[i] << " " ;
	}
	cout << ")" <<endl;
	//
	A.erase(A.begin() + 1);
	cout << "del(A,1) -> " ;
	cout << "A =(";
	for(int i = 0 ; i < A.size() ; i++){
		cout << A[i] << " " ;
	}
	cout << ")" <<endl;
	 	
	return 0; 
	
}
