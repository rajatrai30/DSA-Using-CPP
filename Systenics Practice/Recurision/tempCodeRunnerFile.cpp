#include<iostream>
using namespace std;
void Reverse(string s){
    if(s.length() == 0){
        return;
    }
    string rest = s.substr(1);
    Reverse(rest);
    cout<<s[0]<<" ";
}
int main()
{
    string a;
    cin>>a;
    Reverse(a);
    return 0;
}