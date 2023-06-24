// Write a C++ class called "Rectangle" that has two
// private member variables: "length" and "width". The
// class should have a constructor that initializes these
// member variables and public member functions called
//  "gerArea" by and "getPerimeter" that return the
// rectangle's area and perimeter, respectively.
#include <iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int width;
    public:
    Rectangle(){
        
        }
    Rectangle(int l,int w) {
        length=l;
        width=w;
        }
    int getArea() {
        return length*width;
        }
    int getPerimeter() {
        return 2*(length+width);
        }
    };
int main(){
    Rectangle r1(6,10);
    Rectangle r2(5,10);
    cout<<"Area of r1:"<<r1.getArea()<<endl;
    cout<<"Perimeter of r1:"<<r1.getPerimeter()<<endl;
    cout<<"Area of r2:"<<r2.getArea()<<endl;
    cout<<"Perimeter of r2:"<<r2.getPerimeter()<<endl;
    return 0;
}