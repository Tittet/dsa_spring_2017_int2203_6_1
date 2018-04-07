#include<iostream>
#include<conio.h>
using namespace std;


class DArrayList{
	private:
		int last;
		int size;
		int *element;
	public:
		DArrayList(){
			element=NULL;
			size=0;
			last=-1;
		}
		
		const DArrayList&operator=(const DArrayList&DS){
			for(int i=0;i<=last;i++){
				this->element[i]=DS.element[i];
				
			}
			this->last=DS.last;
			return *this;
		}
		
		bool emptyDS(){
			if(element==NULL)
			return true;
			else
			return false;
		}
		
		int lengthDS(){
			return last+1;
		}
		
		void getDS(int i){
			if(0<=i&&i<=last)
			{
				cout<<element[i];
			}
			else
			{
				cout<<"Khong ton tai phan tu thu "<<i;
			}
		}
		
		void insertDS(int i,int x){
			if(i>last||i<0)
			{
				cout<<"Khong ton tai phan tu thu "<<i;
			}
			else
			{
				if(last+1==size){
					size=size*2+1;
					int *p=new int[size];
					for(int j=0;j<i;j++){
						p[j]=element[j];
					}
					p[i]=x;
					last++;
					for(int j=i+1;j<=last;j++){
						p[j]=element[j=1];
					}
					delete[] element;
					element=p;
				}
				else
				{
					int *p=new int[size];
					for(int j=0;j<i;j++)
					{
						p[j]=element[j];
					}
					p[i]=x;
					last++;
					for(int j=i+1;j<=last;j++)
					{
						p[j]=element[j-1];
						
					}
					delete[] element;
					element=p;
				}
			}
		}
		
		void addDS(int x){
			if(last+1<size){
				element[last+1]=x;
				last++;
			}
			else
			{
				 size=2*size+1;
                int *p=new int[size];
                for(int i=0;i<=last;i++) p[i]=element[i];
                last++;
                p[last]=x;
                delete[] element;
                element=p;
			}
		}
		
		void eraseDS(int i){
			if(i>last||i<0){
				cout<<"Khong ton tai phan tu thu "<<i;
			}
			else
			{
				for(int j=i;j<last;j++){
					element[j]=element[j+1];
				}
					
				last=last-1;
			}
		}
		
		void printDS(){
			for(int i=0;i<last+1;i++){
				cout<<element[i]<<" ";
			}
		}
		
		
		
		
};

int main(){
	DArrayList a;
	cout<<(a.emptyDS()?"true":"false")<<endl;
	a.addDS(1);
	a.addDS(2);
	a.addDS(5);	
//	a.printDS();
	
	a.insertDS(1,10);
	a.eraseDS(1);
	a.printDS();
	return 0;
}

