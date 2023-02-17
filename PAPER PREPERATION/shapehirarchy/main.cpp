#include <iostream>

using namespace std;
class Point{
public:
    float x;
    float y;
  Point(float a, float b):x(a), y(b){
  }
  ~Point(){
  }
};
/********************************************************/
/** Parent class Shape                                  */
/********************************************************/
class Shape{
public:
    char type;
    float area;
private:
    float perimeter;
public:
    Shape():perimeter(0), area(0){
        cout<< "Constructor of Shape"<< endl;
    }
    ~Shape(){
    }
    void Draw(){
        cout<<" In Shape Draw()"<<endl;
    }
    float calcArea() {
        return 0;
    }
    char getType() { return type;
   }


};
/********************************************************/
/** Child class Rectangle                               */
/********************************************************/
class Rectangle: public Shape{
private:
    float Length;
    float Width;
public:
    float area;
public:
    Rectangle(float len, float width):Length(len), Width(width){
        cout<<"In Rectangle constructor"<<endl;
    }
    ~Rectangle(){
    cout<<"In Rectangle destructor"<<endl;
    }
    float calcArea(){
    return Length * Width;
    }
    void Draw()
    {
        cout<< "Draw of Rectangle"<< endl;
    }
};
/********************************************************/
/** Child class Line                                    */
/********************************************************/
class Line : public Shape {
public:
    float x1;
    float y1;
    float x2;
    float y2;
public:
	//Line(float a, float b, float c, float d):x1(a),y1(b), x2(c), y2(d) {
	Line(float a, float b, float c, float d) {
	    x1=a;
	    y1=b;
        x2=c;
        y2=d;
	 cout<< "In Line constructor"<<endl;
	}
	void Draw(){
	     cout << "Line draw()"<<endl;
	     }
};
/********************************************************/
/** Child class Circle                                  */
/********************************************************/
class Circle : public Shape {
public:
    float x;
    float y;

    double radius;
public:
	Circle(float a, float b, double radius) {
		cout << "In Circle constructor"<< endl;
	}
	void Draw(){ cout << "Circle"<< endl;
	 }
	float calcArea() {
	    return 3.14*radius*radius;
	}
};

/********************************************************/
/** main() function                                     */
/********************************************************/

int main()
{
    Shape * ptrToP;   // pointer of parent class
    Shape * ptr;
    Line   ObjectLine(1,2,3,4);
    Rectangle ObjectRec(4,6);
    Circle    ObjCircle(2, 3, 4);
  //  ptrToP = &ObjectLine;
   // ptrToP->Draw();
    ptr=&ObjCircle;
    ptr->Draw();

   // Shape *ptr =&
    return 0;
}
