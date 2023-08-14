// #include<iostream>
// using namespace std;
// int Power(int n, int p){
//     if(p==0){
//         return 1;
//     }
//     int prepower = Power(n, p-1);
//     return n*prepower;
// }
// int main()
// {
//     int n,p;
//     cin>>n>>p;
//     cout<<Power(n,p);
//     return 0;
// }

#include<iostream>
#include<string>
void Reverse(string s){
    if(s.length() == 0){
        return;
    }
    string rest = s.substr(1);
    Reverse(rest);
    cout<<s[0]<<" ";
}

using namespace std;
int main()
{
    string s = "Rakat";
    Reverse(s);
    return 0;
}