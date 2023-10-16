// CHECK IF ARRAY IS SORTED
// #include<iostream>
// using namespace std;
// bool Sorted(int a[], int n){
//     if(n == 1)
//         return true;
//     bool RestArr = Sorted(a+1, n-1);
//     return (a[0]<a[1] && RestArr);
// }
// int main()
// {
//     int a[6];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<Sorted(a,n);
//     return 0;
// }


// PRINT NUMBERS TILL N.... (INCREASING AND DECREASING ORDER)
// #include<iostream>
// using namespace std;
// void dec(int n){
//     if(n == 1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// void inc(int n){
//     if(n == 1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     inc(n);
//     return 0;
// }


// FIRST AND LAST OCCURENCE OF A NUMBER IN AN ARRAY {2,4 6 78,2}
// #include<iostream>
// using namespace std;
// int FirstOccur(int a[], int n, int i, int key){
//     if(i==n){
//         return -1;
//     }
//     if(a[i] == key){
//         return i;
//     }
//     return FirstOccur(a, n, i+1, key);
// }
// int LastOccur(int a[], int n, int i, int key){
//     if(i==n){
//         return -1;
//     }
//     int restArray = LastOccur(a,n,i+1,key);
//     if(restArray != -1){
//         return restArray;
//     }
//     if(a[i] == key){
//         return i;
//     }
//     return -1;
// }
// int main()
// {
//     int a[6];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cin>>key;
//     cout<<FirstOccur(a,n,0,key)<<endl;
//     cout<<LastOccur(a,n,0,key);
//     return 0;
// }



// REVERSE A STRING USING RECURSION
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