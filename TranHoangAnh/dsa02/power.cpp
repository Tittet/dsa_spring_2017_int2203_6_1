#include<iostream>

using namespace std;

int p(int x, int n) {
     int a;
     if(n==0) {
        return 1;
     }
     if(n==1) {
        return x;
     }
     if(n>1) {
        a = p(x, n/2);
        if(n%2!=0) {
            return a * a * x;
        }
        if(n%2==0) {
            return a * a;
        }
     }
}

int main() {
    int x, n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;
    cout << x << "^" << n<< " = " << p(x, n);
    return 0;
}
