#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(){
	ifstream file1 ("DAYSO2.txt");
	ofstream file2 ("KETQUA2.txt");
	vector<int> array;
	int k, n;
	cin >> k;
	
	while (!file1.eof()){
		file1 >> n;
		array.push_back(n);
}
	int a = array.size();
	
	for(int i = k; i < a; i++){
		cout << array[i] << endl;
		file2 << array [i] << endl;
	}
	
	for(int i=0;i<k;i++) {
		cout << array[i] << endl;
		file2 << array[i] << endl;
	}
	return 0;
}
