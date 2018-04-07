#include <iostream>
#include <fstream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main(){
	int n;
	int a[n];
	cin >>n;
	srand(time(0));
	
	for(int i = 0;i<n;i++){
		a[n] = rand() % n+1;
	}	
	ofstream file;
	file.open("DAYSO1.txt");

	for(int i = 0; i < n; i++){
		cout << a[n];
		cout <<"\n";}
	file.close();
	return 0;
}
	
