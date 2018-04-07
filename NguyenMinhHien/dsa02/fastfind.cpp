#include<iostream>
#include<ctime>
using namespace std;

int main(){
	int array[50][50], a, n, max;
	cout << "Nhap cap cua ma tran: ";
	cin >> n;

	for(int i = 0; i < n; i++){
		a = rand()%(n+1);
		for(int j = 0; j < a; j++)
		array[i][j] = 1;
		for(int j = a; j < n; j++)
		array[i][j] = 0;
	}
	cout << "Ma tran cap n: \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
		cout << array[i][j] << " " << "\n\n";
	}
	int i = 0; int j = 0;
	
	while(1){
		if(array[i][j] == 0)
		i++;
		else{
			j++;
			max = i;
		}
		if(i == n-1|| j == n-1)
		break;
	}
	cout << "\n Hang chua nhieu so 1 nhat la hang: " << max +1;
	return 0;
}
