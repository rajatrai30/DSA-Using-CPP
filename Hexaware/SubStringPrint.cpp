#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> st;
    for(int i=0;i<s.length();i++){
        st.push_back(s.substr(i,s.length()-i));
    }
    sort(st.begin(), st.end(), greater<string>());
    cout << st[0];
    return 0; // Add a return statement to indicate successful program completion
}
