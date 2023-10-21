#include<iostream>
using namespace std;

// BASE CLASS
class Shape{
    public:
        virtual void draw(){
            cout<<"Drawing a Shape!!";
        }
};

// DERIVED CLASS 1 AND WE ARE USING @override keyword to use same function
class Circle : public Shape{
    public:
        void draw() override{
            cout<<"Drawing a Circle!!";
        }
};

// DERIVED CLASS 2 AND WE ARE USING @override keyword to use same function
class Rectangle : public Shape{
    public:
        void draw() override{
            cout<<"Drawing a Rectangle!!";
        }
};

int main(){
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    shape1->draw();
    cout<<endl;
    shape2->draw();
    return 0;
}