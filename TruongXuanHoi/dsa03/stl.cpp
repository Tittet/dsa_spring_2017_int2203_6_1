#include <iostream>
#include <vector>

using namespace std;

int main(){
    int vt,gt;
    vector<int> A ;
    vector<int>::iterator Iter;

    if(!A.empty())
        cout << "Not empty" << endl;
    else
        cout << "Empty" << endl;

    cout << "Length(A)->" << A.size() << endl;

    cout << "Phan tu can lay thu ";
    cin >> vt;
    cout << "Element(A," << vt << ")->" << A.at(vt-1) << endl;

    cout << "Gia tri can chen la ";
    cin >>  gt;
    cout << "Vi tri can chen ";
    cin >> vt;
    cout << "insert(A," << vt << "," << gt << ")->";
    A.insert(A.begin()+vt,gt);

    cout << "So can chen vao cuoi day:";
    cin >> gt;
    A.push_back(gt);

    cout << "Vi tri can xoa:";
    cin >> vt;
    A.erase(A.begin()+vt);

    for(Iter = A.begin(); Iter != A.end(); Iter++)
        cout<<" "<<*Iter;
        cout<<endl;
    cout << A.size();
}
