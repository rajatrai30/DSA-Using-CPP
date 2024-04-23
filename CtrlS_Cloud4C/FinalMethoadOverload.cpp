#include <iostream>
using namespace std;

class MyClass {
public:
    final int StaticMemberFunction(int a, int b){
        return a+b;
    }
    final double StaticMemberFunction(double a, double b){
        return a+b;
    }

};

class Child : public MyClass{
public:
    static void StaticMemberFunction(){
        cout << "Static Member Function child class";
    }
};


int main() {
    // STATIC MEMBER FUNCTION *
    MyClass* class1 = new MyClass();
    int x = class1->StaticMemberFunction(4,5);
    double y = class1->StaticMemberFunction(4.667,9.667);
    cout << x << endl;
    return 0;
}
