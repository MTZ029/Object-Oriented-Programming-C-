#include <iostream>
using namespace std;

class pak{
public:
    int l;
    int p;
    int *ptr;
public:
    pak(int ll , int pp,int ktr){

         ll=l;
         pp=p;
        ptr=&ktr;
    cout<<"COnstructor called "<<endl;
    }
    ~pak(){
    cout<<"Destructor called "<<endl;
    }


    pak(pak &obj){

cout<<" COPY COnstructor called "<<endl;
l=obj.l;
p=obj.p;

ptr=obj.ptr;      // shalolow copy
//*ptr=*obj.ptr;

ptr=new int(*obj.ptr);
    }

void print(){
cout<<l<<p<<*ptr<<endl;
}



};
int main()
{

    pak p(2,3,2);
    p.print();
    pak p2(p);
    p2.print();

    *p2.ptr=9;
    cout<<"value of ptr of p object"<<*p.ptr;
      cout<<"value of ptr of p2 object"<<*p2.ptr;


    //cout << "Hello world!" << endl;
    return 0;
}
