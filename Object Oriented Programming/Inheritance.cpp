#include <iostream>
using namespace std;

class Base1 {
public:
    void function1() {
        cout << "Function1 from Base1" << endl;
    }
};

class Base2 {
public:
    void function2() {
        cout << "Function2 from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void combinedFunction() {
        cout << "Combined Function in Derived Class" << endl;
    }
};

int main() {
    Derived derivedObject;
    derivedObject.function1();
    derivedObject.function2();
    derivedObject.combinedFunction();
    return 0;
}
