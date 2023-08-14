// CHECK PALINDROME
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check = true;
    for(int i=0;i<n;i++){
        if(a[i] != a[n-1-i]){
            check = false;
            break;
        }
    }
    if(check == true){
        cout<<"PALINDROME";
    }
    else
    {
        cout<<"NOT PALINDROME";
    }
    return 0;   
}

// LONGEST PALINDROME SUBSEQUENCE
// #include<iostream>
// #include<cstring>
// using namespace std;
// int lps(char a[],int i,int j){
//     if(i==j){
//         return 1;
//     }
//     if(a[i]==a[j] && i+1==j){
//         return 2;
