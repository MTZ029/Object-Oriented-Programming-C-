#include <iostream>
using namespace std ;

class student{
public:
    static int b;
public:
     static void talha(){
     b++;
     cout<<"The value is increase "<<b<<endl;
     }
    };
int student::b=0;
int main(){
student st1; //,st2;

st1.talha();
st1.talha();
st1.talha();

student::talha();
student::talha();

return 0;

}
