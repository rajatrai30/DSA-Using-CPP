#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int a=0;
    int mx=0;
    for(int i=0;i<s.length();i++){
        a++;
        if(s[i] == '@' || s[i] == '$'){
            mx = max(a,mx);
            a=0;
        }
    }
    cout << mx;
    return 0;
}