#include<iostream>
using namespace std;
class Sequence{
private:
    static int x;
public:
    static funcStatic( ){
        x++;
    }
    Sequence(){
        cout<<" CONSTRUCTOR CALLED  "<<endl;
     cout<<x*(x+1)/2<<endl;
    }
    ~Sequence(){
        cout<<"dectructor called"<<endl;
      x--;
    }
};

int Sequence::x=0; // initialised static data member equal to zero //

int main(){
Sequence s1; // object created thus the constructor is called //
s1.funcStatic( );
Sequence s2;
s2.funcStatic( );
Sequence s3;
s3.funcStatic( );
Sequence s4;
Sequence::funcStatic( );
Sequence s5;
Sequence::funcStatic( );
Sequence s6;
Sequence::funcStatic( );
Sequence s7;
Sequence::funcStatic( );
Sequence s8;
Sequence::funcStatic( );
Sequence s9;

return 0;
}
