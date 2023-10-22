#include <iostream>
using namespace std;

class MyClass {
public:
    static int StaticVar;
    static void StaticMemberFunction(){
        cout << "Static Member Function";
    }
    class StaticNestedClass{
        public:
        void StaticNestedClassFunction(){
            cout << "Static Nested Class Function";
        }
    };
};

int MyClass::StaticVar = 40;

int main() {
    // STATIC VARIABLES
    int x = MyClass::StaticVar;
    cout << x;

    // STATIC MEMBER FUNCTION
    MyClass::StaticMemberFunction();

    // STATIC NESTED CLASS
    MyClass::StaticNestedClass obj;
    obj.StaticNestedClassFunction();
    return 0;
}
