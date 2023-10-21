#include<iostream>
using namespace std;

// ABSTRACT CLASS
class Shape{
    public:
        Shape(string color) : color(color){}
        virtual double area() const = 0;
        void display(){
            cout<<"Color: "<<color<<endl;
        }
    private:
        string color;
};

// SUBCLASS 1
class Circle : public Shape{
    public:
        Circle(string color, double radius) : Shape(color), radius(radius){}
        // CONCRETE IMPLEMNATATION FROM BASE CLASS
        double area() const override{
            return 3.142 * radius * radius;
        }
    private:
        double radius;
};

// SUBCLASS 2
class Rectangle : public Shape{
    public:
        Rectangle(string color, double length, double breadth) : Shape(color), length(length), breadth(breadth){}
        // CONCRETE IMPLEMENTATION FROM BASE CLASS
        double area() const override{
            return length * breadth;
        }
    private:
        double length;
        double breadth;
};

int main(){
    Shape* circle = new Circle("Red", 5.0);
    Shape* rectangle = new Rectangle("Blue", 10.0, 5.0);
    circle->display();
    cout<<"Area of Circle: "<<circle->area()<<endl;
    rectangle->display();
    cout<<"Area of Rectangle: "<<rectangle->area()<<endl;
    return 0;
}