#include<iostream>
using namespace std;

int divide(int a, int b){
    if(b == 0){
        throw runtime_error("Division by zero");
    }
    return a/b;
}

int main(){
    try
    {
        int a,b;
        cin>>a>>b;
        int result = divide(a,b);
        cout<<result;
    }
    catch(const runtime_error& e){
        cerr<<"Exception Caught: "<<e.what()<<endl;
    }
    
    return 0;
}