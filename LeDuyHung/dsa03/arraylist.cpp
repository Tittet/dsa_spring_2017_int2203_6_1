#include <iostream>
using namespace std;

class ArrayList{
public:
    static const int MAX_SIZE = 100;
    ArrayList() {
        last = 0;
    }
    bool empty() {
        return last == 0? true : false;
    }
    int length() {
        return last;
    }
    void insert(int x, int i) {
        for(int j = last; j > i; j--) {
            element[j] = element[j-1];
        }
        element[i] = x;
        last++;
    }
    void append(int x) {
        element[last] = x;
        last++;
    }
    void erase(int i) {
        for(int j = i; j < last; j++) {
            element[j] = element[j+1];
        }
        last--;
    }
    int& at(int i) {
        return element[i];
    }
    void print() {
        cout << "A = ( ";
        for(int i = 0; i < last; i++) {
            cout << element[i] << " ";
        }
        cout << ")" << endl;
    }
private:
    int element[MAX_SIZE];
    int current;
    int last;
};

int main() {
    ArrayList A;
    A.append(1);
    A.append(2);
    A.append(3);
    A.append(3);
    A.append(4);
    A.append(5);
    A.print();

    cout << "A.empty() -> ";
	A.empty()? cout << "true" << endl : cout << "false" << endl;

    cout << "A.length() -> " << A.length() << endl;

	cout << "A.at(0) -> " << A.at(0) << endl;

	cout << "A.at(2) -> " << A.at(2) << endl;

	A.insert(10, 2);
    cout << "A.insert(10, 2) -> ";
    A.print();

    A.append(-5);
    cout << "A.append(-5) -> ";
    A.print();

    A.erase(3);
    cout << "A.erase(3) -> ";
    A.print();

    A.erase(1);
    cout << "A.erase(1) -> ";
    A.print();

    return 0;
}
