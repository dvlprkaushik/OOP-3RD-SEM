// Q5) Create a class 'shape'. Derive three classes from it: Circle, Triangle,
// Rectangle. Include the relevant data members and functions in all the classes
// Find the area of each shape and display it.

#include <iostream>
#include <math.h>
using namespace std;

class Shape{
    public:
        float area = 0;
        void ShowArea(){
            cout << "\nArea = "<<area;
        }
};

class Circle: public Shape {
    public:
        float r; 
        Circle (float _r){
            r = _r;
        }
        void CalculateArea(){
            area = r*r * 3.141;
        }
};

class Triangle: public Shape {
    public:
        float a,b,c;
        Triangle (float _a, float _b, float _c){
            a = _a;
            b = _b;
            c = _c;
        }
        void CalculateArea(){
            float s = a+b+c;
            area = (sqrt(s * (s-a) * (s-b) * (s-c)));
        }
};

class Rectangle: public Shape {
    public:
        float h,b;
        Rectangle(float _h, float _b){
            h = _h;
            b = _b;
        }
        void CalculateArea(){
            area = h*b;
        }
};

int main(){
    Rectangle rect(4, 16);
    Triangle tri(5, 7, 21);
    Circle circ(6);
    
    rect.CalculateArea();
    tri.CalculateArea();
    circ.CalculateArea();

    rect.ShowArea();
    tri.ShowArea();
    circ.ShowArea();

    return 0;
}