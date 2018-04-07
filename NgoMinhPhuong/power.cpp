#include<bits/stdc++.h>

using namespace std;




int main(){
    cout << pow(4,34) << endl ;
    return 0;
}


/*
*
*power function
*
*/
int pow (int a , int n){

    if  (n == 1 || a == 1){
        return a;
    }
    else {

            int temp = pow(a ,n/2);

            if  (n % 2 == 0)
                return temp*temp;
            else
                return temp*temp*a;
    }


}


