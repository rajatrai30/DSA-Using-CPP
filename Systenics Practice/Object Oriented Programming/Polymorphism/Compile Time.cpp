// FUNCTION OVERLOADING
#include<iostream>
using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        double add(double a, double b){
            return a+b;
        }
};

// WE ARE USING SAME MEMBER FUNCTION add() but passing different parameters
int main(){
    Calculator c;
    int IntData = c.add(4,5);
    double DoubleData = c.add(4.667,9.667);
    cout<<IntData<<endl;
    cout<<DoubleData<<endl;
    return 0;
}