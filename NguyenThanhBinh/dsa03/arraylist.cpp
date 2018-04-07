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
int main(){
	ArrayList A;
	for(int i=1;i<=3;i++) A.append(i);
	for(int i=3;i<=5;i++) A.append(i);
	cout << "A = ";
	A.print();

	cout << "empty(A) = ";
	A.empty() ? cout << "true" << endl : cout << "false" << endl;

	cout << "length(A) = " << A.length() << endl;

	cout << "element(A, 0) = " << A.at(0) << endl;
	cout << "element(A, 2) = " << A.at(2) << endl;

	cout << "insert(A, 2, 10) = ";
	A.insert(10, 2);
	A.print();

	cout << "append(A, -5) = ";
	A.append(-5);
	A.print();

	cout << "del(A, 3) = ";
	A.erase(3);
	A.print();

	cout << "del(A, 1) = ";
	A.erase(1);
	A.print();

	return 0;
}
