#include<iostream>
#include<string>
using std::string;
using namespace std;

class StringSet{
    private:
        string *element;
        int capacity, last;
    public:
        StringSet() {
            element = NULL;
            capacity = 0;
            last = -1;
        }
        StringSet(int _capacity) {
            element = new string[_capacity];
            capacity = _capacity;
            last = -1;
        }
        StringSet(const StringSet& asset) {
             element = asset.element;
             capacity = asset.capacity;
             last = asset.last;
        }
        ~StringSet() {
            delete element;
        }
        bool empty() const {
            return last == -1;
        }
        int size() const {
            return last+1;
        }
        int find(const string& x ) const {
            int left = 0;
            int right = last;
            while(left <= right) {
                int mid = (left + right) / 2;
                if(element[mid] == x)
                    return mid;
                else if(element[mid] > x)
                    right = mid - 1;
                else if(element[mid] < x)
                    left = mid + 1;
            }
            return -1;
        }
        void erase(const string &x) {
            for(int i = 0; i <= last; i++) {
                if(element[i] == x) {
                    for(int j = i; j < last; j++) {
                        element[j] = element[j+1];
                    }
                    last--;
                }
            }
        }
        void insert(const string &x) {
            int i, j;
            bool had = false;
            if (last == -1){
                string * st = new string[1];
                st[0] = x;
                element = st;
                last = 0;
                capacity = 1;
                return;
            }
            for(i = 0; i <= last; i++) {
                if(element[i] == x) {
                had = true;
                break;
            }
            if(had == false) {
                if(last + 1 == capacity) {
                    capacity = 2 * capacity;
                    string *p = new string[capacity];
                    for(i = 0; i <= last; i++) {
                        p[i] = element[i];
                    }
                    last++;
                    p[last] = x;
                    delete element;
                    element = p;
                    autosort();
                }
                else {
                    capacity = 2 * capacity + 1;
                    string *p = new string[capacity];
                    for(i = 0; i <= last; i++) {
                        p[i] = element[i];
                    }
                    last++;
                    p[last] = x;
                    delete element;
                    element = p;
                    autosort();
                }
            }
        }

        }
        StringSet& operator=(const StringSet& asset) {
            this->element = asset.element;
            this->capacity = asset.capacity;
            this->last = asset.last;
            return *this;
        }
        StringSet& operator+(const StringSet& asset) {
            for(int i = 0; i <= asset.last; i++) {
                if(find(asset.element[i]) == -1) {
                    insert(asset.element[i]);
                }
            }
            autosort();
            return *this;
        }
        void autosort() {
            string temp;
            int i, j;
            for (i = 0; i < last; i++) {
                for (j = i + 1; j <= last; j++) {
                    if (element[i] > element[j]) {
                        temp = element[i];
                        element[i] = element[j];
                        element[j] = temp;
                    }
                }
            }
        }
        void print() {
            for(int i = 0; i <= last; i++) {
                cout << element[i] << "   ";
            }
            cout << endl;
        }
};

int main(){
    cout << "StringSet S1" << endl;
    StringSet S1;

    cout << "S1.empty() -> ";
    S1.empty()? cout << "True" << endl : cout << "False" << endl;

    cout << "S1.insert(\"january\")" << endl;
    S1.insert("january");
    cout << "S1.insert(\"april\")" << endl;
    S1.insert("april");

    cout << "S1.empty() -> ";
    S1.empty()? cout << "True" << endl : cout << "False" << endl;

    cout << "S1.print() -> ";
    S1.print();

    cout << "S1.size() -> "<< S1.size() << endl;

    cout << "\nStringSet S2(S1)" << endl;
    StringSet S2(S1);

    cout << "S2.print() -> ";
    S2.print();

    cout << "\nStringSet S3(3)" << endl;
    StringSet S3(3);

    cout << "S3.insert(\"february\")" << endl;
    S3.insert("february");
    cout << "S3.insert(\"january\")" << endl;
    S3.insert("january");
    cout << "S3.insert(\"november\")" << endl;
    S3.insert("november");

    cout << "S3.print() -> ";
    S3.print();

    cout << "S3.find(\"may\") -> ";
    cout << S3.find("may") << endl;
    cout << "S3.find(\"january\") -> ";
    cout << S3.find("january") << endl;

    cout << "S3.erase(\"november\")" << endl;
    S3.erase("november");

    cout << "S3.print() -> ";
    S3.print();

    cout << "\nStringSet S4 = S2" << endl;
    StringSet S4 = S2;

    cout << "S4.print() -> ";
    S4.print();

    cout << "\nStringSet S5 = S3 + S4" << endl;
    StringSet S5 = S3 + S4;

    cout << "S5.print() -> ";
    S5.print();

    return 0;
}
