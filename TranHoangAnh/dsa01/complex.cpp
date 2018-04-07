#include <iostream>
using namespace std;

class Complex {
public:
    double a, b;
    void input() {
        cout << "\n Nhap phan thuc: ";
        cin >> a;
        cout << " Nhap phan ao: ";
        cin >> b;
    }
    void show() {
        if(b>0) {
            cout << a << " + " << b << "i" << endl;
        }
        if(b<0) {
            cout << a << " - " << b*-1 << "i" << endl;
        }
    }
    Complex operator+(const Complex &t) {
        Complex c;
        c.a = this->a + t.a;
        c.b = this->b + t.b;
        return c;
    }
    Complex operator-(const Complex &t) {
        Complex c;
        c.a = this->a - t.a;
        c.b = this->b - t.b;
        return c;
    }
    Complex operator*(const Complex &t) {
        Complex c;
        c.a = this->a * t.a - this->b * t.b;
        c.b = this->b * t.a + this->a * t.b;
        return c;
    }
};

int main() {
    Complex ctong, chieu, ctich, c1, c2;

    cout << "Nhap so phuc thu nhat";
    c1.input();
    cout << "\nNhap so phuc thu hai";
    c2.input();
    ctong = c1 + c2;
    chieu = c1 - c2;
    ctich = c1 * c2;
    cout << "\nTong: ";
    ctong.show();
    cout << "Hieu: ";
    chieu.show();
    cout << "Tich: ";
    ctich.show();
    return 0;
}
