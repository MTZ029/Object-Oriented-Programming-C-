#include <iostream>
using namespace std ;


class student{
public:
    static int noofstudents;// data member //

    student(){
    noofstudents++;

    }
    ~student(){
    noofstudents--;            // just to delete it    //
    }

};

int student::noofstudents;// defined and initialized //

int main(){
student astudent;
student bstudent;

cout<<" NUMER OF STUDENTS ="<<student::noofstudents<<endl;
cout<<astudent.noofstudents<<endl;
cout<<"HELLO WORLD"<<endl;
return 0 ;
}
