#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n);
    return 0;
}