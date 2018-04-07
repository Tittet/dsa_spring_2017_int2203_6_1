#include<iostream>
using namespace std;
class darraylist{
    private:
        int last,size;
        int  *element;
    public:
        darraylist(){
            element=NULL;
            size=0;
            last=-1;
        }
        ~darraylist(){
            delete element;
        }
        const darraylist& operator=(const darraylist &DS){
            this->last=DS.last;
            for(int i=0;i<=last;i++) this->element[i]=DS.element[i];
            return *this;
        }
       void kiemtra(){
            if(element==NULL) cout<<"\nDanh sach rong.";
            else cout<<"\nDanh sach khong rong.";
        }
        int demPT(){
            return last+1;
        }
        void truycapDS(int i){
            if(0<=i&&i<=last) cout<<"\nGia tri cua phan tu thu " <<i<<":"<<element[i];
            else cout<<"\nKhong ton tai phan tu co so thu tu "<<i<<" trong danh sach.";
        }
        void chenPT(int i,int x){
            if(i<0||i>last+1) cout<<"\nTrong danh sach khong co thu tu nay.";
            else{
                if(last+1==size){
                    size=2*size+1;
                    int *p=new int[size];
                    for(int j=0;j<i;j++) p[j]=element[j];
                    p[i]=x;
                    last++;
                    for(int j=i+1;j<=last;j++) p[j]=element[j-1];
                    delete[] element;
                    element=p;
                }
                else{
                    int *p=new int[size];
                    for(int j=0;j<i;j++) p[j]=element[j];
                    p[i]=x;
                    last++;
                    for(int j=i+1;j<=last;j++) p[j]=element[j-1];
                    delete[] element;
                    element=p;
                } 
            }  
        }
        void themPT(int x){
            if(last+1<size) {
                             element[last+1]=x;
                             last++;
             }
           else{
                size=2*size+1;
                int *p=new int[size];
                for(int i=0;i<=last;i++) p[i]=element[i];
                last++;
                p[last]=x;
                delete[] element;
                element=p;
            }
        }
        void xoaPT(int i){
            if(i<0||i>last) cout<<"\nTrong danh sach khong co phan tu co chi so nay.";
            else {
                for(int j=i;j<last;j++) element[j]=element[j+1];
                last=last-1;
            }
        } 
        void inDS(){
            for(int i=0;i<=last;i++) cout<<element[i]<<"  ";
        }
};
int main(){
    darraylist DS;
    int x,i;
    cout<<"\nKiem tra danh sach:";DS.kiemtra();
    cout<<"\nNhap gia tri muon them vao cuoi danh sach:";cin>>x;
    DS.themPT(x);
    cout<<"\nDanh sach sau khi them:";DS.inDS();
    cout<<"\nSo phan tu cua danh sach:"<<DS.demPT();
    cout<<"\nNhap vi tri muon chen vao danh sach:";cin>>i;
    cout<<"\nGia tri:";cin>>x;
    DS.chenPT(i,x);
    cout<<"\nDanh sach sau khi chen them:";
    DS.inDS();
    cout<<"\nNhap vi tri phan tu muon xoa:";cin>>i;
    DS.xoaPT(i);
    cout<<"\nDanh sach sau khi xoa:";
    DS.inDS();
    cout<<"\nNhap chi so cua phan tu muon truy cap:";cin>>i;
    DS.truycapDS(i);
    cout<<"\nKiem tra danh sach:";DS.kiemtra();
    cin.ignore();
    cin.get();
    return 0;
}
