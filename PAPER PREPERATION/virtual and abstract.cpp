#include <iostream>
#include <cstdlib>
#include <cmath>
/***********************************************************/
/**  Virtual destructor                                    */
/***********************************************************/
using namespace std;
/********************************************************/
/** Parent class Shape                                  */
/********************************************************/
class Shape{
public:
    float area;
private:
    float perimeter;
public:
    Shape():perimeter(0), area(0){
        cout<< "Shape Constructor  "<< endl;
    }

    ~Shape(){
    // ~Shape(){
        cout<< "Shape destructor"<<endl;
    }
  virtual  void Draw(){
       cout << "Draw() in Shape"<<endl;
    }
 virtual   float calcArea() {
           return 0;
    }
 void DisplayShape(){

     cout<< "DisplayShape()"<< "perimeter = "<<  perimeter<<endl;
 }

};


/********************************************************/
/** Child class Triangle                                */
/********************************************************/
class Triangle : public Shape{
    float  base;
    float  height;
public:
	Triangle(float b, float h ):base(b), height(h)	{
	  cout << "Triangle constructor"<< endl;
	}
    ~Triangle(){
	    cout<< "destructor Triangle "<<endl;
	}
	void Draw(){ cout << "Triangle Draw() "<<endl;
	}
	float calcArea() {
	    return (0.5*base * height);
	}
};

class Rectangle : public Shape  {
    public:
        float length;
        float width;
	public:
	 Rectangle() {
	     length=5;
	     width=3;
		cout << "Rectangle constructor "<<endl;
	}
	 ~Rectangle() {
		cout << "Rectangle destructor "<<endl;
	}
};

/********************************************************/
/** Prototypes                                          */
/********************************************************/
//void drawShapes(Shape **, int size);
//void printArea(Shape **, int size);
/********************************************************/
/** main() function                                     */
/********************************************************/

int main()
{
/********************************************************/
/** An object of class Triangle is being created        */
/********************************************************/
cout<<endl;
    //Triangle  Triangle1(l1, l1, 60.7);
    cout<<endl;
    Shape ShapeObj;
    Shape * Shapeptr;
     cout << endl;
     Rectangle R;
     Shapeptr = &R;
    cout << endl;
   Shapeptr->DisplayShape();
   Shapeptr->area = 6;
    return 0;
}
