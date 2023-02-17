#include <iostream>
#include <string.h>
using namespace std;
class STUDENTINFORMATION{
public:
  int rollNo;
  char  * name ;
   STUDENTINFORMATION(int, char *); /** Simple constructor */
  STUDENTINFORMATION(const STUDENTINFORMATION &);/** copy constructor */
  void Display();
};
void Functiona( STUDENTINFORMATION );
int main(){
	STUDENTINFORMATION obj(25,"Zia");
	STUDENTINFORMATION STUDENTINFORMATIONB = obj;
	Functiona(obj);
	return 0;
}
STUDENTINFORMATION::STUDENTINFORMATION(const STUDENTINFORMATION & Obj){
    rollNo = Obj.rollNo;
    #if 0
    name = Obj.name;/** Shallow copy constructor*/
    #else
    name = new char(25); /** Deep copy constructor*/
    strcpy(name, Obj.name);
    #endif
}
STUDENTINFORMATION::STUDENTINFORMATION(int RollNumber, char * Name){
   rollNo =RollNumber;
   name=new char(25);
   strcpy(name, Name);
}
void STUDENTINFORMATION::Display( ){
   cout<< "Name is "<< name<<endl;
   cout<< "Roll Number "<<rollNo<< endl;

   name=NULL;
}
void Functiona(STUDENTINFORMATION Obj){

}
