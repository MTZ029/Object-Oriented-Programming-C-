#include<iostream>
using namespace std;

class talha{
public:
    const float l;

    const float w;

    const float h;

public:
    talha( float a1, float a2 , float a3 ):l(a1), w(a2), h(a3){
    cout<<"     CONSTRUCTOR CALLED      "<<endl;
    }
    float calculate()const{
    cout<<" IN THE FUNCTION OF CALCULATION  \n"<<endl;
    cout<<"  THE AREA IS     \n"<<l*w<<endl;
    cout<<"  THE VOLUME IS   \n"<<l*w*h<<endl;
    }


};

int main(){
    float length;
    cout<<" ENTER THE LENGTH    "<<endl;
    cin>>length;

    float width;
    cout<<" ENTER THE WIDTH     "<<endl;
    cin>>width;

    float height;
    cout<<" ENTER THE HEIGHT    "<<endl;
    cin>>height;

 const talha Talha( length , width , height );     // object created      //

 Talha.calculate();

 //talha *ptr=&Talha;

// ptr->calculate();

cout<<" HELLO WORLD! "<<endl;
return 0;
}
