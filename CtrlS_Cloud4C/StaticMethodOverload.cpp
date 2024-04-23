#include <iostream>
using namespace std;

class MyClass {
public:
    static int StaticMemberFunction(int a, int b){
        return a+b;
    }
    static double StaticMemberFunction(double a, double b){
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
    // STATIC MEMBER FUNCTION
    int x = MyClass::StaticMemberFunction(4,5);
    double y = MyClass::StaticMemberFunction(4.667,9.667);
    cout << x << endl;
    cout << y << endl;
    return 0;
}
