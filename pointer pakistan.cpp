







#include<iostream>

using namespace std;

class car{

private:

    static int cnumber;

    static int counter;// given in the assignment question //


public:
    string cname;
    string reg;

    car();
    static void stat( void ){
     cnumber++;
    counter++;

    cout<<"     THE NUMBER OIF DATA MEMBER IS   "<<cnumber<<endl;
    cout<<"     THE COUNTER IN THE QUESTION IS STARTED FROM 100 JUST FOR UNDERSTANDING          "<<counter<<endl;



   /* cout<<"     THE ENTERED REGISTATION NUMBER IS   "<<reg<endl;
      we cant use this because we can't call non-static data member by static function so error has occured
      invalid us of car::reg because the static function is being used }*/

    };
    void display( void );// function just extensiated to access non static data members //
    ~car();//  destructor called //
};

car::car(){
cout<<"     PLEASE ENTER THE NAME OF THE CAR        "<<endl;
    cin>>cname;
    cout<<endl;
     cout<<"     PLEASE ENTER THE REGISTRATION NUMBER OF THE CAR     "<<endl;
    cin>>reg;


}

/*
It was error as we cant declare static void car::stat() to have static linkage

static void car::stat( void ){
 cnumber++;
    counter++;

    cout<<"     THE NUMBER OIF DATA MEMBER IS   "<<cnumber<<endl;
    cout<<"     THE COUNTER IN THE QUESTION IS STARTED FROM 100 JUST FOR UNDERSTANDING          "<<counter<<endl;



   // cout<<"     THE ENTERED REGISTATION NUMBER IS   "<<reg<endl;
    //  we cant use this because we can't call non-static data member by static function so error has occured
      //invalid us of car::reg because the static function is being used }
*/
void car::display( void ){

    cout<<"     THE ENTERED NAME OF THE CAR NUMBER      "<<cname<<endl;
    cout<<endl;
    cout<<"     THE ENTERED REGITRATION NUMBER OF THE CAR NUMBER    "<<reg<<endl;
    cout<<endl;
}

car::~car(){
    counter--;
    counter--;
    }
//  static data members initialization   //

int car::cnumber;//initialized when envoked ....// // initially equal to zero//

int car::counter=100;//just initialised to check //

int main(){
    car c1;

    c1.display();
    car::stat( ); // static function called in main function     //


    car c2;
    c2.display();
    car::stat( );

    car c3;
    c3.display();
    car::stat( );



return 0;
}
