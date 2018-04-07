#include<iostream>
#include<list>

using namespace std;

class ArrayList{
	public:
		static const int MAX_SIZE=1000;
		
	ArrayList(){
		last=0;
		
	}
	
	bool empty() const{
		return last==0;
	}
	
	int length()const{
		return last;
	}
	
	void insert(const int a,int i){
		for(int k=last;k>i;k--){
			element[k]=element[k-1];
		}
		element[i]=a;
		last++;
	}
	
	void append(const int x){
		element[last++]=x;
	}	
	
	void erase(int i){
		for(int k=i;k<last;k++){
			element[k]=element[k++];
		}
		last--;
	}
	void print() {
        cout << "A = ( ";
         for(int i = 0; i < last; i++) {
             cout << element[i] << " ";
         }
         cout << ")" << endl;
     }
	
	
	int& at(int i){
		return element[i];
	}
	
	private:
     int element[MAX_SIZE];
     int current;
     int last;
};

int main(){
	ArrayList A;
	A.append(1);
	A.append(2);
	A.append(3);
	A.append(3);
	A.append(4);
	A.append(5);
	
	cout<<(A.empty()?"true":"false")<<endl;
	cout<<A.length()<<endl;
	cout<<A.at(0)<<endl;
	cout<<A.at(2)<<endl;
	
	A.insert(2,10);
	A.print();
	
	A.append(-5);
	A.print();
	
	A.erase(3);
	A.print();
	
	A.erase(1);
	A.print();
}
