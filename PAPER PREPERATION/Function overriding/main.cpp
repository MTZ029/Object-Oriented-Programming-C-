#include <iostream>
using namespace std;

class Base {                          // parent classs
   public:
void print() {
        cout << "Base Function Parent 1" << endl; // the overriddenf unction is called //
    }
};

class Derived : public Base {            // child classs   in order to call this function we can use the key word virtual with the function of base class
   public:
   void print() {
        cout << "Derived Function child 2" << endl;
    }
};

int main() {
    Derived Object1;

// pointer of Base type that points to Object1

    Base * ptr = &Object1;

    // call function of Base class using ptr

    ptr->print();

    return 0;
}
