#include <iostream>
#include <string.h>
using namespace std;


class talha{
	public:
		string a ;
		string b ;
		public:
		talha(){
			cout<<"Entre the name of the student "<<endl;
			cin>>a;
			cout<<"Enter the sex pf the student "<<endl;
			cin>>b;
		}
		~talha(){
			cout<<"Destructor called "<<endl;
		}
		void polo(){
			cout<<a ;
			cout<<b ;
		}
	
	
};
int main(){
    talha t1;
	talha *ptr;
	ptr  =  &t1;
    
    ptr->polo();
    
    return 0;	
}
