// C++ program to call the overridden function
// from a member function of the derived class

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;

        // call overridden function
        Base::print();
    }
};

int main() {
    Derived derived1 , obj;
    derived1.print();

     obj.Base::print();



    // note that we can also add  Base::print() to the child calss in order to call the overriddden funtion.
    cout<<endl;
    cout<<"\t";

    /*Base obj1 , obj2;
    obj1.print();
   // obj2.Derived::print();   // can't be done because the derived class is not the parent of base   //
*/
    return 0;
}
