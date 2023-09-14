#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string a, result = "";
    while (n--)
    {
        /* code */
        cin >> a;
        if(a.length() & 1){
            if(a.length()>result.length()){
                result = a;
            }
        }
    }
    if(result == "")
        cout << "Better luck next time";
    else
        cout << result;
}