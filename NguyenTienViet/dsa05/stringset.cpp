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
    StringSet(const StringSet& asset){
        capacity = asset.size();
        last = capacity - 1;
        string * st = new string[capacity];
        for (int i = 0; i <= last; i++){
            st[i] = *asset.at(i);
        }
        element = st;
    };
    ~StringSet(){
        delete[] element;
    }

    bool empty() const{
        if (last == -1)
            return true;
        else return false;
    }
    int size() const{
        return (last + 1);
    }
    string * at(int i) const{
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
    //trường hợp rỗng
        if (!element){
            element = new string[1];
            element[0] = x;
            last = 0;
            capacity = 1;
            return;
        }
    // trường hợp đầy phần tử
        if(last + 1 == capacity){

            capacity *= 2;
            string * st = new string[capacity];
            int i = 0;
            while (i <= last && element[i].compare(x) == -1){
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
        }else{ // trường hợp bình thường
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



    StringSet& operator=(StringSet& asset){
        capacity = asset.capacity;
        last = asset.last;
        element = new string[capacity];
        for (int i = 0; i <= last; i++)
        {
           element[i] = asset.element[i];
        }
    return *this;
    }

    StringSet& operator+(StringSet& asset){

        StringSet a(capacity + asset.capacity);
        a.element = new string[a.capacity];
        int i = 0, j = 0;
        while(i <= last && j < asset.size()){
            if(element[i].compare(*asset.at(j)) == 1){
                a.insert(*asset.at(j));
                j++;
            }else{
                a.insert(element[i]);
                i++;
            }
        }

        if(i > last){
            for(j; j < asset.size(); j++){
                a.insert(*asset.at(j));
            }
        }
        if(j == asset.size()){
            for(i; i <= last; i++){
                a.insert(element[i]);
            }
        }

        this->capacity = a.capacity;
        this->last = a.last;
        this->element = new string[this->capacity];
        for (int i = 0; i <= last; i++)
        {
           this->element[i] = a.element[i];
        }
        return *this;
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

    a.insert("cd");
    a.insert("md");
    a.insert("op");
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


    cout << "c = a -> tap string c" << endl;
    StringSet c;
    c = a;
    c.print();

    cout << "tap string b:" << endl;
    StringSet b;
    b.insert("ex");
    b.insert("zs");
    b.print();

    cout << "c = a + b -> tap string c" << endl;
    c = a+b;
    c.print();

    return 0;
}
