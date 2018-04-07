#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream file("DAYSO1.txt");
	int n; int k; int a[n]; int so; int x;
	cin >> k;
	file >> n; 
	for(int i = 0; i < n; i++){
		file >> so;
		a[i] = so;
	}
	cout << "Do dai day so: " << n << "\n";
	
	for(int i = 0;i < n;i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] > a[i]){
				x = a[j];
				a[j] = a[i];
				a[i] = x; 				
			}
		}
	}
	cout << "So nguyen lon nhat cua day la "<< a[0] << "\n";
	cout << "So nguyen lon thu hai cua day la "<< a[1] << "\n";
	cout << "So nguyen lon thu " << k << " cua day la " << a[k - 1] << "\n";
	return 0;
}
	
	
	
	
