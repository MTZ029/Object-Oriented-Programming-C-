#include <iostream>
using namespace std;
class student
{
   public://    ATTRIBUTES    //
       //       Zero just to clear the memory       //

      const long long dob = 0;//pointer //

       string *nameptr ;// POINTER //

       string *depptr ; // pointer //

       const long long ID=0 ;

   public://    member functions    //

       student(student &k){
           nameptr=k.nameptr;//SHALLOW COPY//

           depptr=new string(*k.depptr);// deep copy constructor //

       }
        student(){
        };//default constructor//

        ~student(){//       tilde used for the constructor      //
        cout<<"     STUDENT DESTRUCTOR CALLED IN THE CLASS STUDENT RELEASING MEMORY    "<<endl;
       delete nameptr ;
       delete depptr ;
        exit( 0 );
        };
        student(   long long DOB , long long id ): dob (DOB), ID(id) {//initializer list //

         // cout<<"    THE DATE OF BIRTH IS       "<<dob<<endl;

         cout<<"    ENTER THE DATE OF BRITH WITH ONLY LAST DIGIT OF THE YEAR OF BIRTH   "<<endl;
         cin>>DOB;
         cout<<"    ENTERED DATE OF BIRTH IS    \n"<<DOB<<endl;
         cout<<"    PLEASE ENTER THE  REGISTATION NUMBER OF THE STUDENT       "<<endl;
         cin>>id;
         cout<<"    THE REGISTRATION NUMBER IS       "<<id<<endl;
        }

        student(string * nameptr , string *depptr ){
        nameptr= new string ;//       MEMORY ALLOCATED DYNAMICALLY    // // new is the key word to allocate the memory //

        depptr= new string ; //       MEMORY ALLOCATED DYNAMICALLY    //

        cout<<"     PLEASE ENTER THE NAME OF THE STUDENT    "<<endl;
        cin>> *nameptr;
        cout<<"     PLEASE ENTER THE NAME OF THE DEPARTMENT "<<endl;
        cin>>*depptr;
        cout<<"     THE ENTERED NAME IS                     "<< * nameptr<<endl;
        cout<<"     THE ENTERED DEPARTEMNT IS               "<< * depptr<<endl;
        cout<<endl;
        }

};


int main(){

int * t;
long long c , d;
string * e ;
string * f ;

student S1( c , d );// object is created //

student S2( e , f );// The overloaded constructor //


cout<< "        DONE WITH DEEP  AND SHALLOW  COPY CONSTRUCTOR         "<<endl;

cout<<"ENTER m to modify"<<endl;

char m;
cin>>m;
if(m=='m'){



   student s7(e,f);
student c8(s7);
cout<<*c8.nameptr;
cout<<*c8.depptr;




   }

return 0;
}
