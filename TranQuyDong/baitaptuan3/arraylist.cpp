#include<iostream>
using namespace std;


class ArrayList{
	public:
		static const int MAX_SIZE=100;
		ArrayList(){
			last=0;
			current=0;
		}
		bool empty(){
			if(last==0){
				return true;
			}
			else
				return false;
		}
		int length(){
			return last;
		}
		void insert(const int x, int i){
			for(int k=last;k>=i;k--){
				element[k]=element[k-1];
			}
			element[i]=x;
			last++;
		}
		void append(const int x){
			element[last]=x;
				last++;
		}
		void arase(int i){
			for(int k=i;k<last;k++){
				element[k]=element[k+1];
			}
			last--;
		}
		int& at(int i){
			return element[i];
		} 
		void print(){
			cout<<"A=(";
			for(int i=0;i<last-1;i++){
				cout<<element[i]<<",";
			}
			cout<<element[last-1];
			cout<<")"<<endl;
		}
	private:
		int element[MAX_SIZE];
		int current;
		int last;
};
main(){
	ArrayList A;
	A.append(1);
	A.append(2);
	A.append(3);
	A.append(3);
	A.append(4);
	A.append(5);
	A.print();
	if(A.empty()){
		cout<<"empty(A)-> true"<<endl;
	}
	else
		cout<<"empty(A)-> false"<<endl;
	
	cout<<"length(A)-> "<<A.length()<<endl;
	
	cout<<"element(A,0)-> "<<A.at(0)<<endl;
	
	cout<<"element(A,2)-> "<<A.at(2)<<endl;
	
	A.insert(10,2);
	cout<<"insert(A,2,10)-> ";
	A.print();
	
	A.append(-5);
	cout<<"append(A,-5)-> ";
	A.print();
	
	A.arase(3);
	cout<<"del(A,3)-> ";
	A.print();
	
	A.arase(1);
	cout<<"del(A,1)-> ";
	A.print();
	
}

