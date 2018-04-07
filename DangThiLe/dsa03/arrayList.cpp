#include<iostream>
#include<vector>

using namespace std;

class ArrayList{
	public:
		static const int MAX_SIZE = 100;
		ArrayList();
		bool empty() const;
		int length() const;
		void insert(const int x, int i); // Xen giá tri x vào vi trí i trong DS
		void append(const int x); // Thêm giá tri x vào duôi DS
		void erase(int i); // Loai khoi DS phan tu o ví trí i
		int& at(int i) const; // Tra ve tham chieu den phan tu o vi trí i
		void print() const; 
	private:
		int element[MAX_SIZE]; // Mang tinh element lýu các phan tu cua DS
		int current; // chi so cua phn tU hiEn tai
		int last; // chi so cua phan tu cuoi cùng
};
// Khoi tao danh sach rong
ArrayList::ArrayList(){
	last = -1;
}
// Kiem tra DS rong
bool ArrayList::empty() const {
	return last == -1;
}
// Xac dinh do dai DS
int ArrayList::length() const {
	return last + 1;
}
// Xen gia tri x vao vi tri i trong DS
void ArrayList::insert(const int x, int i){
	if(last == MAX_SIZE)
		cout << "Danh sach day";
	else if(i<1 || i > last+1)
		cout << "Vi tri khong hop le";
	else{
		for(int j = last; j > i-1  ; j--)
			element[j] = element[j-1];
		element[i-1] = x;
		last++;
	}
	
}
// Them gia tri x vao duoi DS
void ArrayList::append(const int x){
	if(last == MAX_SIZE)
		cout << "Danh sach day";
	else{
		element[last] = x;
		last++;
	}
;}
// Loai khoi DS phan tu o vi tri i
void ArrayList::erase(int i){
	if(i<1 || i > last+1)
		cout << "Vi tri khong hop le";
	else if(last == -1)
		cout << "Danh sach rong";
	else{
		for(int j = i-1; j < last - 1; j++)
			element[j] = element[j+1];
		last--;
	}
}
// Tra ve tham chieu den phan tu o vi tri i
int& ArrayList::at(int i)const{
	int temp;
	temp = element[i-1];
	return temp;
}
// In DS
void ArrayList::print() const{
	for (int i = 0; i < last; i++){
		cout << element[i] << " ";
	}
	cout << "\n";
}

int main(){
	ArrayList A;
	for(int i = 1; i<=3; i++)
		A.append(i);
	for(int i = 3; i<=5; i++)
		A.append(i);
	A.print();
	cout << A.empty() << "\n";
	A.insert(10,2);
	A.print();
	A.erase(3);
	A.print();
	
	
	return 0;
}
