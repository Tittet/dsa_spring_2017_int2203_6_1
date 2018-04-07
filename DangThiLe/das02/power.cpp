#include <iostream>

using namespace std;
int pow(int x, int n){

	if(n == 1)
		return x;
	else{
		int temp = pow(x, n/2);
		if(n%2 == 0)
			return temp*temp;
		else 
			return temp*temp*x;
	} 
	
}

int main(){
	int x,n,p;
	cin >> x >> n;
	p = pow(x,n);
	cout << p;
	return 0;
	
}
