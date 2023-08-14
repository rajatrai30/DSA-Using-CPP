// REVERSE A STRING WITHOUT USING STRING FUNCTION
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string a = "RajatRai";
    int n = a.size();
    for(int i=0;i<n/2;i++){
        swap(a[i], a[n-i-1]);
    }
    cout<<a;
    return 0;
}