#include<iostream>
using namespace std;

class MyClass{
    public:
        int data;
        // DEFAULT CONSTRUCTOR
        MyClass(){
            cout<<"Default Constructor called"<<endl;
        }

        // PARAMETERIZED CONSTRUCTOR
        MyClass(int x){
            data = x;
            cout<<"Parameterized Constructor called with"<<x<<endl;
        }

        // COPY CONSTRUCTOR
        MyClass(const MyClass& other){
            data = other.data;
            cout<<"Copy Constructor called with"<<data<<endl;
        }

        // MOVE CONSTRUCTOR
        MyClass(MyClass&& other){
            this->data = other.data;
            other.data = 0;
            cout<<"Move Constructor called with"<<data<<endl;
        }

        // DESTRUCTOR
        ~MyClass(){
            cout<<"Destructor called with"<<data<<endl;
        }
    
};

int main(){
    // CALL DEFAULT
    MyClass obj1;

    // CALL PARAMETERIZED
    MyClass obj2(10);

    // CALL COPY
    MyClass obj3 = obj2;

    // CALL MOVE
    MyClass obj4 = move(obj2);
    // VALUED REMAINED AFTER MOVE
    cout<<obj4.data<<endl;
    return 0;
}