#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> A;
	for(int i=1;i<=3;i++) A.push_back(i);
	for(int i=3;i<=5;i++) A.push_back(i);

	cout << "A = ";
	for(int i=0;i<A.size();i++) cout << A.at(i) << " ";
	cout << endl;

	cout << "empty(A) = ";
	A.empty() ?  cout << "true" << endl : cout << "false" << endl;

	cout << "length(A) = " << A.size() << endl;

	cout << "element(A,0) = " << A.at(0) << endl;
	cout << "element(A,2) = " << A.at(2) << endl;

	A.insert(A.begin() + 2, 10);
	cout << "insert(A,2,10) = ";
	for(int i=0;i<A.size();i++) {
        cout << A.at(i) << " ";
        }
	cout << endl;


	A.insert(A.end(), -5);
	cout << "append(A, -5) = ";
	for(int i=0;i<A.size();i++) {
        cout << A.at(i) << " ";
        }
	cout << endl;

	A.erase(A.begin()+3);
	cout << "del(A,3) = ";
	for(int i=0;i<A.size();i++) {
        cout << A.at(i) << " ";
        }
	cout << endl;

	A.erase(A.begin()+1);
	cout << "del(A,1) = ";
	for(int i=0;i<A.size();i++) {
        cout << A.at(i) << " ";
	}
	cout << endl;

	return 0;
}
