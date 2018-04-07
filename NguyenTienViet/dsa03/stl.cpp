#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

int main(){
    vector<int> a;
    for(int i = 1; i <= 3; i++) a.push_back(i);
    for(int i = 3; i <= 5; i++) a.push_back(i);

    cout << "empty(a) : " << a.empty() << endl;
    cout << "length(a) = " << a.size() << endl;
    cout << "element(a,0) = " << a[0] << endl;
    cout << "element(a,2) = " << a[2] << endl;

    a.insert(a.begin()+2,10);
    cout << "insert(a,2,10) -> " ;
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ", ";
    }
    cout << endl;

    a.push_back(-5);
    cout << "append(a,-5) -> ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ", ";
    }
    cout << endl;

    a.erase(a.begin() + 3);
    cout << "del(a,3) -> ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ", ";
    }
    cout << endl;

    a.erase(a.begin() + 1);
    cout << "del(a,1) -> ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}
