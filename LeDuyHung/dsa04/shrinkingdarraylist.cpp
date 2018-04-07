#include<iostream>
#include "darraylist.cpp"

using namespace std;

class ShrinkingDArrayList:public DArrayList {
    public:
        ShrinkingDArrayList() {
            size = 0;
            last = -1;
            element = NULL;
        }
        ~ ShrinkingDArrayList() {
            delete element;
            cout << "\nMemory released!" << endl;
        }
        void ShrinkToFit(){
            if(last + 1 < size){
                size = last + 1;
                int *p = new int[size];
                for(int i = 0; i <= last; i++) {
                    p[i] = element[i];
                }
                delete[] element;
                element = p;
            }
        }
};

int main() {
    ShrinkingDArrayList DA;

    DA.append(1);
    DA.append(2);
    DA.append(3);
    DA.append(3);
    DA.append(4);
    DA.append(5);
    DA.show();

    cout << "DA.empty() -> ";
	DA.empty()? cout << "true" << endl : cout << "false" << endl;

    cout << "DA.count() -> " << DA.count() << endl;

	cout << "DA.at(0) -> " << DA.at(0) << endl;

	cout << "DA.at(2) -> " << DA.at(2) << endl;

	DA.insert(2, 10);
    cout << "DA.insert(2, 10) -> ";
    DA.show();

    DA.append(-5);
    cout << "DA.append(-5) -> ";
    DA.show();

    DA.del(3);
    cout << "DA.del(3) -> ";
    DA.show();

    DA.del(1);
    cout << "DA.del(1) -> ";
    DA.show();

    cout << "\nDA's size before shrinking: " << DA.getsize() << endl;
    cout << "DA.ShrinkToFit()" << endl;
    DA.ShrinkToFit();
    cout << "DA's size after shrinking: " << DA.getsize() << endl;

    return 0;
}
