#include<iostream>
using namespace std;

class plane{
private:

    static int x;

    static int y;

public:

    string name;

    string seatnuber;

    string airlinename;

public:
    static float first(){
        cout<<endl;
          y++;
     cout<<"     THE CURRUNTLY ENTERTAINED BUYER NUMBER IS     "<<y<<endl;

    }

    float getinfo(){
    cout<<"     PLEASE ENTER THE NAME OF THE BUYER OF THE TICKET        "<<endl;
    cin>>name;
    cout<<"     PLEASE ENTER THE NAME OF THE SEAT YOU WANT TO PREFFER   "<<endl;
    cin>>seatnuber;
    cout<<"     PLEASE ENTER THE NAME OF THE AIRLINE YOU WANT TO TRAVEL WITH    "<<endl;
    cin>>airlinename;
    }
    static float staticmemberfunctions(){
     x++;
    cout<<"     THE TURN OF     "<<x<<"     BUYER       "<<endl;
    }
};

int plane::x; // THE DEFAULT VALUE IS 0 //

int plane::y; // THE DEFAULT VALUE IS 0 //

int main(){
plane p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;


// for p1 object  //

plane::first();  //   STATIC MEMBER FUNCTIONS CALLED IN THE MAIN  FUNCTION    //
p1.getinfo();
plane::staticmemberfunctions();


// for p2 object  //
plane::first();
p2.getinfo();
plane::staticmemberfunctions();

// for p3 object  //
plane::first();
p3.getinfo();
plane::staticmemberfunctions();

// for p4 object  //
plane::first();
p4.getinfo();
plane::staticmemberfunctions();

// for p5 object  //
plane::first();
p5.getinfo();
plane::staticmemberfunctions();

// for p6 object  //
plane::first();
p6.getinfo();
plane::staticmemberfunctions();

// for p7 object  //
plane::first();
p7.getinfo();
plane::staticmemberfunctions();

// for p8 object  //
plane::first();
p8.getinfo();
plane::staticmemberfunctions();

// for p9 object  //
plane::first();
p9.getinfo();
plane::staticmemberfunctions();

// for p10 object  //
plane::first();
p10.getinfo();
plane::staticmemberfunctions();

cout<<" HELLO WORLD! "<<endl;
return 0;
}
