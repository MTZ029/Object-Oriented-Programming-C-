#include<iostream>
using namespace std;


class Circle{
	public:
	const	int x_cor;
	const	int y_cor;

	Circle(int c,int z):x_cor(c),y_cor(z){

	}

	void DisplayCentre(){
		cout<<"("<<x_cor<<","<<y_cor<<")"<<endl;

	}


};

int main(){
		cout<<"Enter x-coordinate"<<endl;
	int a;
	cin>>a;
		cout<<"Enter y-coordinate"<<endl;
	int b;
	cin>>b;

	Circle c1(a,b);
	cout<<"center is"<<endl;
	c1.DisplayCentre();


	return 1;
}
