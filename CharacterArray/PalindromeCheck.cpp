// CHECK PALINDROME
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	bool check = true;
	int n = a.size();
	for(int i=0;i<n/2;i++){
		if(a[i] != a[n-1-i]){
			check = false;
			break;
		}
	}
	if(check){
		cout<<"PALINDROME";
	}
	else{
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
