#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream input ("DAYSO1.txt");
	int number_of_line, number,temp;
	int k;
	cin >> k;
	input >> number_of_line;
	
	int arr[number_of_line];
	for(int i = 0; i < number_of_line; i++){
		input >> number;
		arr[i] = number;
	}
	
	for(int i = 0;i < number_of_line ;i++){
		for(int j = i + 1; j < number_of_line; j++){
			if(arr[j] > arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp; 				
			}
		}
	}
	cout << "So nguyen lon thu nhat la: "<< arr[0] << "\n";
	cout << "So nguyen lon thu hai la: "<< arr[1] << "\n";
	cout << "So nguyen lon thu " << k << " la: " << arr[k - 1] << "\n";

	return 0;
}

