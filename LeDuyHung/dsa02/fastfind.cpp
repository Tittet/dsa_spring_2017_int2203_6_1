#include<iostream>

using namespace std;

int main() {
    int i = 0, j = 0, max;
    int a[4][4] = { 1, 0, 0, 0,
                    1, 1, 1, 0,
                    1, 1, 1, 1,
                    1, 1, 0, 0 };
    while(i<4&&j<4) {
        if(a[i][j]==0) {
            i++;
        }
        else {
            j++;
            max = i; // vi j luon tang nen hang nao co a[i][j] = 1 tuc la hang do co nhieu so 1 hon cac hang truoc do
        }
    }
    cout << "Hang chua nhieu so 1 nhat la hang thu : " << max + 1;
    return 0;
}
