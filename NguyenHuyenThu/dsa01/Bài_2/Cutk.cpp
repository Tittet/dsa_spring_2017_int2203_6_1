#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> arr;
	ifstream input  ("DAYSO2.txt");
	ofstream output ("KETQUA2.txt");
	int k, number;
	cin >> k;
	while(!input.eof()){
		input >> number;
		arr.push_back(number);
	}
	for(int i = arr.size() - k + 1; i < arr.size(); i++){
		cout << arr[i] << endl;
		output << arr[i] << endl;
	}
	for(int i = 0; i < k; i++ ){
		cout << arr[i] << endl;
		output << arr[i] << endl;
	}
	return 0;
}

