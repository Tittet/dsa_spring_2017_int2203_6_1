#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> arr;
	
	ifstream input ("DAYSO2.txt");
	ofstream output ("KETQUA1.txt");
	
	int number;
	
	while(!input.eof()){
		input >> number;
		arr.push_back(number);
	}
	for(int i = arr.size() - 1 ; i >= 0; i--)
		cout << arr.at(i) << endl;	
	for(int i = arr.size() - 1 ; i >= 0; i--)
		output << arr.at(i) << endl;	
	return 0;
}

