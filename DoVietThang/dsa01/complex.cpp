#include<iostream>

using namespace std;

class Complex{
    public:
        float a,b;

    Complex add(Complex p1, Complex p2){
        Complex c;
        c.a = p1.a + p2.a;
        c.b = p1.b + p2.b;
        return c;
    }
    Complex sub(Complex p1, Complex p2){
        Complex c;
        c.a = p1.a - p2.a;
        c.b = p1.b - p2.b;
        return c;
    }
    Complex mul(Complex p1, Complex p2){
        Complex c;
        c.a = p1.a*p2.a - p1.b*p2.b;
        c.b = p1.a*p2.b + p1.b*p2.a;
        return c;
    }
};

int main(){
    Complex c1,c2,c3;

    c1.a = 1;
    c1.b = 2;
    c2.a = -3;
    c2.b = -4;

    c3 = c1.add(c1,c2);
    cout << "cong" << endl << c3.a << "  " << c3.b << endl;

    c3 = c1.sub(c1,c2);
    cout << "tru" << endl << c3.a << "  " << c3.b << endl;

    c3 = c1.mul(c1,c2);
    cout << "nhan" << endl << c3.a << "  " << c3.b << endl;

    return 0;
}
