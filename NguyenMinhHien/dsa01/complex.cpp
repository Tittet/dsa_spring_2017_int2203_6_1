#include<iostream>

using namespace std;

class Complex{
	private:
		double a; 
		double b; 
	public:
	void nhapso(){
		cout << "\n Nhap phan thuc: "; 
		cin >> a;
		cout << "\n Nhap phan ao:"; 
		cin >> b;
	}
	void inso(){
		cout << a << "+" << b << "i";
	}
		Complex operator+(Complex u2){
			Complex u;
			u.a = a + u2.a;
			u.b = this->b + u2.b;
			return u;
		}
		Complex operator-(Complex u2){
			Complex u;
			u.a = a - u2.a;
			u.b = this->b - u2.b;
			return u;
		}
		Complex operator*(Complex u2){
			Complex u;
			u.a = a * u2.a;
			u.b= this->b * u2.b;
			return u;
		}
};
int main(){
	Complex u1, u2;
	cout << "\n Nhap so thu nhat:"; u1.nhapso();
	cout << "\n Nhap so thu hai: "; u2.nhapso();
	
	Complex a, b,c;
	a = u1 + u2; a.inso();
	b = u1 - u2; b.inso();
	c = u1 * u2; c.inso();
	return 0;
}

