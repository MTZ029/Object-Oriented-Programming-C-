#include<iostream>
#include<string.h>
using namespace std;

class person{
	public:
	char *name ;
	string cnic;

	public:
		person(){ // constructor //
          name = new char( 15 ); // the c++ liberary would alocate memory from heap //
          cout<<" please enter the name of the person"<<endl;
        gets(name);
		}
        ~person(){
        cout<<"In the destructor "<<endl;
        delete name ;
        }
};

class son:public person{ // child class //
public :
    char *depar;
    string rollno;

public:
    son( char* a ){ // variable with char parameterized constructor //
    depar= new char( 30 );

    strcpy( depar , a ); // copied by string copy function to department name //
    }
    void get(){
    cout<<"Please enter the cnic of the student"<<endl;
    cin>>cnic;
    cout<<"Plase enter the rollno of the student"<<endl;
    cin>>rollno;
    }
    void disp(){
    cout<<" name is "<<name<<endl;;
    cout<<" cnic is "<<cnic<<endl;;
    cout<<" department is "<<depar<<endl;;
    cout<<" rollno is "<<rollno<<endl;
    }
    ~son(){
    cout<<"In the destructor "<<endl;
    delete depar;
    }
};
int main(){
char * department;
department=new char (20);
cout<<" Department "<<endl;
gets( department );
son objson(department);
objson.get();
objson.disp();

return 0;
}
