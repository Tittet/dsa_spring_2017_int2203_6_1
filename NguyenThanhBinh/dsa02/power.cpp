#include <iostream>
 #include <cmath>

 using namespace std;

 int main(){

 	int x , n;
 	cout << " Nhap x:" ;
 	cin >> x;
 	cout << " Nhap n:" ;
 	cin >> n;
 	while (n<0){
        cout<<"nhap lai x n:" ;
        cin>> x >> n;
 	}
 		cout << " Ket qua x^n= " << pow(x,n)<< endl;

return 0;
 }
