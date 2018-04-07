#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	 int A[20][20], n, dem[100];
     int i=0, j=0 ;
     cout << "Nhap cap cua ma tran: ";
     cin >> n;
	 while(1){
	 	
	 	if(A[i][j] == 0) 
		 	i++;
		else{
			dem[j] =i;
			j++;
		}
		if(i==n-1||j==n-1) break;
	 }
	 int max=0;
	 for(int k = 0; k<j; k++){
	 	if(max<dem[k])max = dem[k];
	 	
	 }
	 max = max+1;
	 cout << "Hang co nhieu so 1 nhat la: " << max ;
	return 0;
}
