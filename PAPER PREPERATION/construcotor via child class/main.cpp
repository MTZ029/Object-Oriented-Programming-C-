#include <iostream>

using namespace std;


class vehicle{
    public:
int c;


        vehicle(int x){
c=x;
        };

void printing(){
    cout<<"FUCK U rana BONDU"<<endl;

    }


};



class autoVehicle{



public:
int z,y;
    autoVehicle(int y,int z){
this->z=y;
this->y=z;

    };


    void prin(){
    cout<<"FUCK U KASHIF BONDU"<<endl;

    }

};


class child:public vehicle , public autoVehicle{
public:

    child():vehicle(9),autoVehicle(2,3){


    };
void childish(){
    cout<<"FUCK U alishah chuttu BONDU"<<endl;

    }
};

int main()
{
    child child1;
    child1.childish();
 child1.prin();
    child1.printing();


   cout<< child1.c;
  cout<<  child1.y;
  cout<<  child1.z;

    return 0;
}
