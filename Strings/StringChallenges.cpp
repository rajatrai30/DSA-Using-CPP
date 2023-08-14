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

// LOWERCASE TO UPPERCASE
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "RAJATRAIDEVELOPER";
//     for(int i=0;i<a.size();i++){
//         if(a[i] >= 'A' && a[i] <= 'Z'){
//             a[i] += 32;
//         }
//     }
//     cout<<a;
//     return 0;
// }

// SHORTCUT METHODS
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "RAJATRAIDEVELOPER";
//     transform(a.begin(), a.end(), a.begin(), ::tolower);
//     cout<<a<<endl;

//     string b = "rajatraideveloper";
//     transform(b.begin(), b.end(), b.begin(), ::toupper);
//     cout<<b;
//     return 0;
// }

// FORM THE BIGGEST NUMBER FROM NUMBER STRING
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "12345";
//     sort(a.begin(), a.end(), greater<int>());
//     cout<<a;
//     return 0;
// }

// MAXIMUM OCCURED CHARACTER IN STRING
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a = "tttttaadde";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<a.size();i++){
        freq[a[i] - 'a']++;
    }

    char ans = 'a';
    int maxf=0;
    for(int i=0;i<26;i++){
        if(freq[i] >= maxf){
            maxf = freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxf<<" "<<ans;
    return 0;
}