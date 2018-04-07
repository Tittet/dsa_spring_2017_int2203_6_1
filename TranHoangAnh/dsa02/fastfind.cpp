#include<iostream>

using namespace std;

int main() {
    int i = 0, j = 0, max;
    int a[5][5] = { 1, 1, 0, 0, 0,
                    1, 1, 1, 1, 0,
                    1, 1, 1, 1, 1,
                    1, 1, 1, 0, 0,
                    1, 0, 0, 0, 0 };
    while(i<5&&j<5) {
        if(a[i][j]==0) {
            i++;
        }
        else {
            j++;
            max = i;
        }
    }
    cout << "Hang chua nhieu so 1 nhat la hang thu : " << max + 1;
    return 0;
}
