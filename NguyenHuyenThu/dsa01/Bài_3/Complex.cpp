#include<iostream>
using namespace std;
class Complex{
	private:
		double real;
		double img;
	public:
		void setReal(double real){
			this->real = real;
		}
		double getReal(){
			return this->real;
		}
		void setImg(double img){
			this->img = img;
		}
		double getImg(){
			return this->img;
		}
		Complex operator+(const Complex& i1){
			Complex i;
			i.real = this->real + i1.real;
			i.img = this->img + i1.img;
			return i;
		}
		Complex operator-(const Complex& i1){
			Complex i;
			i.real = this->real - i1.real;
			i.img = this->img - i1.img;
			return i;
		}
		Complex operator*(const Complex& i1){
			Complex i;
			i.real = this->real * i1.real;
			i.img = this->img * i1.img;
			return i;
		}
};
int main(){
	Complex i1, i2;
	double i1_real, i1_img, i2_real, i2_img;
	
	cin >> i1_real;
	cin >> i1_img;
	cin >> i2_real;
	cin >> i2_img;
	
	i1.setReal(i1_real);
	i1.setImg(i1_img);
	
	i2.setReal(i2_real);
	i2.setImg(i2_img);
	
	Complex i3, i4,i5;
	
	i3 = i1 + i2;
	i4 = i1 - i2;
	i5 = i1 * i2;
	
	cout << i3.getReal() << " + " << i3.getImg() <<"i" << endl;
	cout << i4.getReal() << " + " << i4.getImg() <<"i" << endl;
	cout << i5.getReal() << " + " << i5.getImg() <<"i" << endl;
	return 0;
}


