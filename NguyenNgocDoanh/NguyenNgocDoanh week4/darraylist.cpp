#include<iostream>

using namespace std;

class DArrayList {
	private:
		int * element;
		int capacity; // suc chua cua mang
		int last; // chi so cua phan tu cuoi cung
	public:
		DArrayList();
		DArrayList(const DArrayList& dal1);
		~DArrayList();
		bool empty() const;
		int length() const;
		int& at(const int &i) const;
		void insert(const int &x,const int &i);
		void append(const int &x);
		void checkCapacity(); // ktra mang full
		void del(const int &i);
		void print();
};

int main(){
	DArrayList A;
	for(int i=0;i<=9;i++)
		A.append(i);
	A.print();
	cout << "empty(A) = ";
	cout << (A.empty()? "true":"false") << endl;
	cout << "length(A) = " << A.length() << endl;
	cout << "element(A, 0) = " << A.at(0) << endl;
	
	A.insert(10, 2);
	cout << "insert(A,2,10) = ";
	A.print();
	
	cout << "append(-5) = ";
	A.append(-5);
	A.print();
	
	cout << "del(A, 3) = " ;
	A.del(3);
	A.print();
	
	return 0;
}

DArrayList::DArrayList(){
		capacity = 10;
		element = new int [capacity];
		last = 0;
	}

//Ham kien tao sao chep
DArrayList::DArrayList(const DArrayList& dal1){
		DArrayList dal2;
		dal2.element = new int[dal1.length()];
		for(int i=0;i<dal1.length();i++){
			this->element[i] = dal1.element[i];
		}
}

DArrayList::~DArrayList(){
		delete [] element;
		element = NULL;
		last = 0;
		capacity = 0;
}
		
void DArrayList::checkCapacity(){
		if(last == capacity ){
			capacity = capacity * 2;
			int * temp = new int[capacity];
			for(int i=0;i<last;i++){
			temp[i] = element[i];
			}
			delete [] element;
			element = temp;	
		} 
	}
		
bool DArrayList::empty() const {
		return last == 0;
	}
		
int DArrayList::length() const {
		return last;
	}
		
int& DArrayList::at(const int &i) const{
		return element[i];
	}
		
void DArrayList::insert(const int &x,const int &i){
		checkCapacity();
		for(int t=last;t>i;t--){
			element[t] = element[t-1];
		}
		element[i] = x;
		last++;
}
		
void DArrayList::append(const int &x){
		checkCapacity();
		element[last++] = x;
		
}
		
void DArrayList::del(const int &i){
		if (i<0 || i>last) 
			cout << "Khong co phan tu thu " << i << "trong mang." << endl;
		else {
			for(int t=i;t<last;t++){
				this->element[t] = element[t+1];
			}
			last--;
		}
}
		
void DArrayList::print(){
		for(int i=0;i<last;i++)
		cout << element[i] << " ";
		cout << endl;
	}
	



