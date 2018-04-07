#include<iostream>

using namespace std;

class DArrayList {
    protected:
        int last, size;
        int *element;
    public:
        DArrayList() {
            element = NULL;
            size = 0;
            last = -1;
        }
        ~ DArrayList() {
            delete element;
        }
        const DArrayList& operator=(const DArrayList &DS) {
            this->last = DS.last;
            for(int i = 0; i <= last; i++) {
                this->element[i] = DS.element[i];
            }
            return *this;
        }
        bool empty() {
            return (element == NULL)? true : false;
        }
        int getsize() {
            return size;
        }
        int count() {
            return last + 1;
        }
        int& at(int i) {
            if(0 <= i && i <= last) {
                return element[i];
            }
        }
        void insert(int i, int x) {
            if(i < 0 || i > last + 1) {
                cout << "invalid input" << endl;
            }
            else {
                if(last + 1 < size) {
                    int *p = new int[size];
                    for(int j = 0; j < i; j++) {
                        p[j] = element[j];
                    }
                    p[i] = x;
                    last++;
                    for(int j = i + 1; j <= last; j++) {
                        p[j] = element[j-1];
                    }
                    delete[] element;
                    element = p;
                }
                else {
                    size = 2 * size + 1;
                    int *p = new int[size];
                    for(int j = 0; j < i; j++) {
                        p[j] = element[j];
                    }
                    p[i] = x;
                    last++;
                    for(int j = i + 1; j <= last; j++) {
                        p[j] = element[j-1];
                    }
                    delete[] element;
                    element = p;
                }
            }
        }
        void append(int x) {
            if(last + 1 < size) {
                element[last+1] = x;
                last++;
            }
            else {
                size = 2 * size + 1;
                int *p = new int[size];
                for(int i = 0; i <= last; i++) {
                    p[i] = element[i];
                }
                last++;
                p[last] = x;
                delete[] element;
                element = p;
            }
        }
        void del(int i) {
            if(i < 0 || i > last) {
                cout << "invalid input" << endl;
            }
            else {
                for(int j = i; j < last; j++) {
                    element[j] = element[j+1];
                }
                last--;
            }
        }
        void show() {
            cout << "DA = ( ";
            for(int i = 0; i <= last; i++) {
                cout << element[i] << " ";
            }
            cout << ")" << endl;
        }
};
/*int main() {
    DArrayList DA;

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

    return 0;
}*/
