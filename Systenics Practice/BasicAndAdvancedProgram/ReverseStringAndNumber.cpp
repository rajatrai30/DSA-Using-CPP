// TO REVERSE A STRING
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a;
//     cin>>a;
//     cout<<a<<endl;
//     int n = a.size();
//     for (int i=0;i<n;i++)
//     {
//         cout<<a[n-1-i];
//     }
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a;
//     cin>>a;
//     int n = a.size();
//     for(int i=0;i<n/2;i++){
//         swap(a[i],a[n-1-i]);
//     }
//     cout<<a;
//     return 0;
// }

// TO REVERSE A NUMBER
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int reverse = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n = n/10;
//     }
//     cout<<reverse;
//     return 0;
// }
