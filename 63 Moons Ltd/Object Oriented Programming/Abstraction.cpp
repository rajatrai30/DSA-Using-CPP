#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0;
};

class Circle : public Shape{
    public:
        void draw() override{
            cout<<"Drawing a Circle!!";
        }
};

// In Abstraction we does not need to know what are these objects and why they are created.
// We just have to use and don't understand the complexity of the program
int main(){
    Circle c;
    c.draw();
    return 0;
}