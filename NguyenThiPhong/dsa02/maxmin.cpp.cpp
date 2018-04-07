#include<iostream>
using namespace std;
int main(){
	int n,m,i,a[50],min,max,min1,max1;
	cout <<"so phan tu cua day la: ";
	cin >> n;
	for (i=1;i<=n;i++){
		cout << "a["<<i << "]=";
		cin >> a[i];
		}
		m=n/2;
		if(a[1]>a[2]){ 
		max=a[1];
		min=a[2];
		}
		else{
		max=a[2];
		min=a[1];
		}
		
 for(i=2;i<=m;i++){
	if(a[2*i-1]>a[2*i]){
		max1=a[2*i-1];
		min1=a[2*i];}
		else{
			max1=a[2*i];
			min1=a[2*i-1];
		}
	}	
if (max>max1) max= max;
else max=max1;
if( min< min1) min= min;
else min=min1;
if (n==2*m +1){
	if (max>a[n])max=max;
	else max= a[n];
	if (min < a[n]) min= min;
	else min = a[n];
	}
cout <<"gia tri lon nhat la: "<< max<< endl;
cout <<"gia tri nho nhat la: "	<<min;
return 0;
}	
		
