#include<iostream>
#include<string.h>

using namespace std;

class StringSet{
public:
    StringSet(){};
    StringSet(int _capacity){
        capacity = _capacity;
        last = -1;
        string * st = new string[capacity];
        element = st;
    };
    StringSet(StringSet& asset){
        capacity = asset.size();
        last = capacity - 1;
        string * st = new string[capacity];
        for (int i = 0; i <= last; i++){
            st[i] = *asset.at(i);
        }
        element = st;
    };

    bool empty() const{
        if (last == -1)
            return true;
        else return false;
    }
    int size() const{
        return (last + 1);
    }
    string * at(int i){
        return (&element[i]);
    }

    int find(const string & x) const{
        for (int i = 0; i <= last; i++){
            if (x.compare(element[i]) == 0) return i;
        }
        return -1;
    }
    void erase(const string & x){
        for (int i = 0; i <= last; i++){
            if (x.compare(element[i]) == 0){
                for(int j = i; j < last; j++){
                    element[j] = element[j+1];
                }
                element[last] = "";
                last--;
            }
        }
    }

    void insert(const string& x){
    //Truong hop rong
        if (!element){
            string * st = new string[1];
            st[0] = x;
            element = st;
            last = 0;
            capacity = 1;
            return;
        }
    //Truong hop day du phan tu
        if(last + 1 == capacity){
            capacity *= 2;
            string * st = new string[capacity];
            int i = 0;

            while (element[i].compare(x) == -1 && i <= last){
                st[i] = element[i];
                i++;
            }
            st[i] = x;
            for(i = i + 1; i <= last+1; i++){
                st[i] = element[i-1];
            }
            delete[] element;
            element = st;
            last++;
        }else{ //Truong hop binh thuong
            int position = 0;
            while(element[position].compare(x) == -1 && position <= last){
                position++;
            }
            for(int j = last + 1; j > position; j--){
                element[j] = element[j-1];
            }
            element[position] = x;
            last++;
        }
    }
    void print(){
        for(int i = 0; i <= last; i++){
            cout << element[i] << endl;
        }
    }
private:
    string * element = NULL;
    int capacity;
    int last;
};

int main(){
    StringSet a;

    a.insert("md");
    a.insert("cv");
    cout << "tap string a :" << endl;
    a.print();

    cout << "a.insert('bf'):" << endl;
    a.insert("bf");
    a.print();

    cout << "a.size() = " << a.size() << endl;

    cout << "a.empty() = " << a.empty() << endl;

    cout << "a.erase('cv'):" << endl;
    a.erase("cv");
    a.print();

    cout << "a.find('md') = " << a.find("md") << endl;
    return 0;
}
