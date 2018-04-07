#include<iostream>
#include<fstream>
using namespace std;
void sort(int a[],int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	ifstream ip("DAYSO1.txt");
	int n;
	ip >> n;
	int a[n];
	for(int i=0;i<n;i++){
		ip >> a[i];
	}
	ip.close();
	sort(a,n);
	int k;
	cin >> k;
	cout << "max: " << a[n-1] << endl;
	cout << "max2: " << a[n-2] << endl;
	cout << "maxk: " << a[n-k] << endl;
	return 0;
}
