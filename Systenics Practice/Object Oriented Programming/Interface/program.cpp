#include<iostream>
using namespace std;

// INTERFACE IS ALSO KNOWN AS THE BLUEPRINT FOR THE CLASSES AND THEY NEED TO IMPLEMENT FUNCTION
// INTERFACE IS USED TO ACHIEVE ABSTRACTION
class Drawable{
    public:
        virtual void draw() = 0;
};

// CLASS HAS USED THE INTERFACE
class Circle : public Drawable{
    public:
        void draw(){
            cout<<"Drawing Circle using Interface"<<endl;
        }
};

// CLASS HAS NOT USED THE INTERFACE
class Rectangle{
    public:
        void draw(){
            cout<<"Drawing Rectangle without using Interface"<<endl;
        }
};

int main(){
    Drawable* circle = new Circle();
    circle->draw();
    // DRAWING SHAPE WITHOUT USING INTERFACE
    Rectangle* rectangle = new Rectangle();
    rectangle->draw();
    return 0;
}