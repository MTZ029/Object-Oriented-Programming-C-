#include <iostream>
using namespace std;


class add{  // abstract class
public:
      virtual  int calc()=0;

   /*   {
       	cout<<"Addition is used to add "<<endl;
	   }*/
};
class sub:public add{
		public:
       int calc()
      {
       	cout<<"sub is used to subtract "<<endl;
	   }

int main(){

sub obj1,obj2;    // abtsract type classss

add *ptr =&obj2;
ptr->calc();
// obj1.add::calc();

//add a;
//add *ptra =&a;
//ptra->calc();

//obj2.calc();
return 0;
}
