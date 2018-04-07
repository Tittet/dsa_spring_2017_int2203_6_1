#include<bits/stdc++.h>

using namespace std;

void maxmin(int a[] , int n);


int main(){

    int a[13] = {2,1231313,3,-2,5,3,4,5,2,4656,34,121,-123};
    maxmin(a,13);
    return 0;

}
/*
*
*find max min of the available array
*
*/
void maxmin(int a[],int  n){

    int max = 0;
    int min = 0;

    for (int i = 0 ; i < n ; i++ ){

            min += a[i] - min & a[i] - min >> 31;
            max += a[i] - max & max - a[i] >> 31;

    }

    cout << "Max:" << max << endl << "Min:" << min <<endl;

}
