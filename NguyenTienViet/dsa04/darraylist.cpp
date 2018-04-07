#include<iostream>
#include<conio.h>
using namespace std;

class DArrayList{
    public:
        //constructors
        DArrayList(){
            Size = 0;
            last = -1;
            int *ar = new int[0];
            element = ar;
        };

        DArrayList(DArrayList &dall){
            Size = dall.length();
            last =  Size - 1;
            int *ar = new int[last+1];
            element = ar;
            for (int i = 0; i <= last; i++){
                ar[i] = *dall.at(i);
            }
        }

        //các hàm kiểm tra thông số danh sách
        bool empty() const{
            if (last == -1) return true;
            return false;
        };
        int length(){
            return (last + 1);
        }
        int * at(int i){
            return &element[i];
        }

        //các hàm cập nhật danh sách
        void append(const int x){
            if (last == -1){
                int *ar = new int[1];
                ar[0] = x;
                delete[] element;
                element = ar;
                last ++;
                Size ++;
            }
            else{
                if(last + 1 == Size){

                    int *ar = new int[2*Size];
                    for(int i = 0; i <= last; i++){
                        ar[i] = *(element+i);
                    }
                    ar[last + 1] = x;
                    delete[] element;
                    element = ar;
                    last ++;
                    Size = 2 * Size;
                }
                else{
                    element[last + 1] = x;
                    last ++;
                }
            }
        }
        void insert(const int x, const int i){
            if (last == -1){
                int * ar = new int[1];
                ar[0] = x;
                delete[] element;
                element = ar;
                last ++;
                Size ++;
            }
            else{
                if(last + 1 == Size){
                    int * ar = new int[2*Size];
                    for(int j = 0; j < i; j++){
                        ar[j] = element[j];
                    }
                    ar[i] = x;
                    for(int j = i+1; j <= last+1; j++){
                        ar[j] = element[j-1];
                    }
                    delete[] element;
                    element = ar;
                    last ++;
                    Size *= 2;
                }
                else{
                    last ++;
                    for (int j = last; j > i; j--){
                        element[j] = element[j-1];
                    }
                    element[i] = x;
                }
            }
        }
        void erase(const int i){
            for (int j = i; j < last; j++){
                element[j] = element[j+1];
            }
            last --;
            if (last < (Size/4)){
                int ar[Size/2];
                for (int j = 0; i <= last; j++){
                    ar[j] = element[j];
                }
                Size = Size/2;
            }
        }

        //hàm in danh sách
        void print(){
            for (int i = 0; i <= last; i++){
                cout << element[i] << ", ";
            }
            cout << endl;
        }

    protected:
        int * element;
        int Size;
        int last;
};


class ShrinkingDArrayList: public DArrayList{
    public:
    void shrinkToFit(){
        if (last + 1 < Size){
            Size = last + 1;
            int * ar = new int[Size];
            for (int i = 0; i <= last; i++){
                ar[i] = element[i];
            }
            delete[] element;
            element = ar;
        }
    }
    int getSize(){
        return Size;
    }
};
int main(){
    DArrayList a;
    for(int i = 1; i <= 3; i++) a.append(i);
    for(int i = 3; i <= 5; i++) a.append(i);
    cout << "a : ";
    a.print();

    cout << "empty(a) : " << a.empty() << endl;
    cout << "length(a) = " << a.length() << endl;
    cout << "element(a,0) = " << *a.at(0) << endl;
    cout << "element(a,2) = " << *a.at(2) << endl;

    a.insert(10,2);
    cout << "insert(a,10,2) -> " ;
    a.print();

    a.append(-5);
    cout << "append(a,-5) -> ";
    a.print();

    a.erase(3);
    cout << "del(a,3) -> ";
    a.print();

    a.erase(1);
    cout << "del(a,1) -> ";
    a.print();

    cout << endl;
    ShrinkingDArrayList b;
    for(int i = 1; i <= 3; i++) b.append(i);
    for(int i = 3; i <= 5; i++) b.append(i);
    cout << "b : ";
    b.print();
    cout << "b.getSize = " << b.getSize() << endl;
    b.shrinkToFit();
    cout << "b.shrinkToFit -> b.getSize " << b.getSize();
    return 0;
}
