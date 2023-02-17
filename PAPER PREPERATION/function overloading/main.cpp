#include <iostream>
#include "t1.h"
using namespace std;

int main()
{
    int q ;    // initializing the value of q //
    char w;
    talha t;
    talha *ptr =&t;
    ptr->home();
    ptr->home( q );
    ptr->home( w );
    cout << "Hello world!" << endl;
    return 0;
}
