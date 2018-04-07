#include<iostream>

using namespace std;

int main(){
    int n,i,max,min,tmax,tmin;
    int a[100];

    cout << "nhap n:" << endl;
    cin >> n;

    cout << "nhap lan luot day so: " << endl;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    if (a[0] > a[1]){
        max = a[0];
        min = a[1];
    }
    else {
        max = a[1];
        min = a[0];
    }

    for(i = 2; i < n-2; i += 2){
        if (a[i] > a[i+1]){
            tmax = a[i];
            tmin = a[i+1];
        }
        else {
            tmax = a[i+1];
            tmin = a[i];
        }
        if (tmax > max) max = tmax;
        if (tmin < min) min = tmin;
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    return 0;
}
