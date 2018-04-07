#include<iostream>
#include<ctime>
#include <vector>
#include<cstdlib>

using namespace std;

void findmaxmin(vector<int>& list, int &max, int &min, int &pss) {
    int k = list.size() - 1;
    int m = k / 2;
    int i, maxtemp, mintemp;
    min = max = list[0];

    for(i=1;i<=m;i++) {
        if(list[2*i-1]>=list[2*i]) {
            maxtemp = list[2*i-1];
            mintemp = list[2*i];
        }
        else {
            maxtemp = list[2*i];
            mintemp = list[2*i-1];
        }
        max = (max>maxtemp)? max : maxtemp;
        min = (min<mintemp)? min : mintemp;
        pss += 3;
    }
    if(k==(2*m+1)) {
        max = (max>list[k])? max : list[k];
        min = (min<list[k])? min : list[k];
        pss++;
    }
}

int main() {
    int n, i, min, max, pss = 0;
    vector<int> list;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    srand(time(NULL));
    for(i=0;i<n;i++) {
        list.push_back(rand() % 500 + 1);
        cout << list[i] << "  ";
    }
    findmaxmin(list, max, min, pss);
    cout << "\nMax = " << max << endl;
    cout << "Min = " << min << endl;
    cout << "n = " << n << endl;;
    cout << "So phep so sanh = " << pss << endl;
    return 0;
}

// neu n le, n so se mat 3*(n-1)/2 phep so sanh
// neu n chan, n so se mat 3*(n-2)/2+1 = 3*n/2-2 phep so sanh
