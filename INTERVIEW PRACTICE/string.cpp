// LOWERCASE TO UPPERCASE
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "vnejnvejnvjevnen";
//     for(int i=0;i<a.size();i++){
//         if(a[i] >= 'a' && a[i] <= 'z'){
//             a[i] -= 32;
//         }
//     }
//     cout<<a;
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "hthhhhhhdff";
//     int freq[26];
//     for(int i=0;i<26;i++){
//         freq[i] = 0;
//     }
//     return 0;
// }

// TO REVERSE A STRING
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n = a.size();
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-1-i]);
    }
    cout<<a;
    return 0;
}