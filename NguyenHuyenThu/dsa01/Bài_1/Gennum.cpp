#include<iostream>
#include<fstream>
#include <cstdlib> 
#include<ctime>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	srand(time(0));
	for(int i =0; i < n; i++){
		arr[i] = rand();
	}
	ofstream output ("DAYSO1.txt");
	output << n << "\n";
	for(int i = 0; i < n; i++){
		output << arr[i] << "\n";
	}
	return 0;
}

