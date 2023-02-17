#include <iostream>

using namespace std;

class talha{
private:
    int a ;
    int b ;
public:
    void getcinformation(int x , int y){
    a=x;
    b=y;
    }
    void showinformation(){
    cout<<" a = "<<a<<" b = "<<b<<endl;
    }
    // NOW IMPLIMENTING THE OPERATOR OVERLOADING CONCEPT //
    talha operator >( talha obj){
    talha temp;
    if(temp.a= a > obj.a){
      cout<<"a= "<<a;
    }
    else{
  cout<<" a= "<<obj.a;
    }
    if(temp.b= b > obj.b){
         cout<<" b= "<<b;
    }
    else{
        cout<<" b= "<<obj.b;

    }
    return temp;
    }
};
int main()
{
    talha obj1,obj2,obj3;   // object created
    obj1.getcinformation( 10 , 4 );
    obj2.getcinformation( 6 , 9 );
    cout<<"Object 1 has the values"<<endl;
    obj1.showinformation();
    cout<<"Object 2 has the values"<<endl;
    obj2.showinformation();


    cout<<"The greater values from the object are"<<endl;
    obj3 = obj1 > obj2;cout<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
