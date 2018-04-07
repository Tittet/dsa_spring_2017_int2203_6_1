#include<bits/stdc++.h>

using namespace std;

int main () {

    int a[5][5] = {1,1,1,0,0,
                    0,0,0,0,0,
                    1,1,1,1,1,
                    1,1,1,1,0,
                    1,0,0,0,0};
    int j = 0 ;
    int max;

    //i is the counter , i < n , so complexy is O(n);
    for(int i = 0 ; i < 5 ;){
        if(a[i][j] == 1){
            j++;
            max = i;
        }
        else{
            i++;
        }
    }

        cout << max+1<< endl;


    return 0;
}
