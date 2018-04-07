#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class complex
{
    float real, image;
    public:
        complex(float r = 0, float i = 0)
        {
            real = r;
            image = i;
        }

        void display()
        {
            cout << real << (image >= 0 ? '+':'-') << fabs(image) << "i" << endl;
        }

        /* (a + ib) + (c + id) = (a + c) + i(b + d) */
        complex operator+(const complex& b)
        {
            complex add;
            add.real = real + b.real;
            add.image = image + b.image;
            return add;
        }

        /* (a + ib) – (c + id) = (a - c) + i(b - d) */
        complex operator-(const complex& b)
        {
            complex sub;
            sub.real = real - b.real;
            sub.image = image - b.image;
            return sub;
        }

        /* (a + ib) * (c + id) = (ac – bd) + i(bc + ad) */
        complex operator*(const complex& b)
        {
            complex multi;
            multi.real = (real * b.real) - (image * b.image);
            multi.image = (image * b.real) + (real * b.image);
            return multi;
        }

};

int main()
{
    /* Create a & b */
    complex a(-2,5);
    complex b(3,4);
    cout << "\n\ta = ";
    a.display();
    cout << "\n\tb = ";
    b.display();

    /* (a + ib) + (c + id) = (a + c) + i(b + d) */
    complex add;
    add = a + b;
    cout << "\n\ta+b = ";
    add.display();

    /* (a + ib) – (c + id) = (a - c) + i(b - d) */
    complex sub;
    sub = a - b;
    cout << "\n\ta-b = ";
    sub.display();

    /* (a + ib) * (c + id) = (ac – bd) + i(bc + ad) */
    complex multi;
    multi = a * b;
    cout << "\n\ta*b = ";
    multi.display();

    return 0;
}
