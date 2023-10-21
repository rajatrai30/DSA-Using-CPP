#include<iostream>
#include<string>
using namespace std;

void ReverseString(string a, int n){
    for(int i=0;i<n;i++){
        cout<<a[n-1-i];
    }
}

int main()
{
    string a;
    cin>>a;
    int n = a.size();
    ReverseString(a,n);
    return 0;
}