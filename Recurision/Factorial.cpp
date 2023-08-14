#include<iostream>
using namespace std;

int Factorial(int n){
    if(n == 0){
        return 1;
    }
    int prefact = Factorial(n-1);
    return n*prefact;
}
int main()
{
    int n;
    cin>>n;
    cout<<Factorial(n);

    return 0;
}