#include<iostream>
#include<vector>

using namespace std;

int main(){
	std::vector<int> A;   // A(3,100) = [100, 100, 100]
	for(int i=1;i<=3;i++) A.push_back(i);
	for(int i=3;i<=5;i++) A.push_back(i);
	
	cout << "A = ";
	//for(int i=0;i<A.size();i++) cout << A[i] << " ";
	for(int i=0;i<A.size();i++) cout << A.at(i) << " ";
	cout << endl;
	
	cout << "empty(A) = ";
	A.empty() ?  cout << "true" << endl : cout << "false" << endl;
	cout << "length(A) = " << A.size() << endl;
	
	std::cout << "element(A,0) = " << A.at(0) << endl;
	std::cout << "element(A,2) = " << A.at(2) << endl;
	
	std::vector<int>::iterator it;
	it = A.begin()+2;
	A.insert(it, 10);
	cout << "insert(A,2,10) = ";
	for(int i=0;i<A.size();i++) std::cout << A.at(i) << " ";
	cout << endl;
	
	//std::vector<int>::iterator it1;
	//it1 = A.end();
	A.insert(A.end(), -5);
	cout << "append(A, -5) = ";
	for(int i=0;i<A.size();i++) std::cout << A.at(i) << " ";
	cout << endl;
	
	A.erase(A.begin()+3);
	cout << "del(A,3) = ";
	for(int i=0;i<A.size();i++) std::cout << A.at(i) << " ";
	cout << endl;
	
	A.erase(A.begin()+1);
	cout << "del(A,1) = ";
	for(int i=0;i<A.size();i++) std::cout << A.at(i) << " ";
	cout << endl;
	
	return 0;
}
