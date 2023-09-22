// Fibonnaci USING DP
#include<iostream>
using namespace std;

const int N = 1e5+2;
int dp[N];

// USING MEMOIZATION TABLE (LOOKUP TABLE)
// IN LOOKUP TABLE WE STORE ALL THE UNIQUE COMPUTATION RECORDS SO THAT 
// IT WON'T GET REPEATED AGAIN AND AGAIN
// IT IS A VERY NICE APPROACH
int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = Fibonacci(n-1) + Fibonacci(n-2);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<N;i++){
        dp[i] = -1;
    }
    cout<<Fibonacci(n);
    return  0;
}


// USING BOTTOM UP APPROACH (TABULATION APPROACH)
// int main(){
//     int n;
//     cin>>n;
//     dp[0] = 0;
//     dp[1] = 0;
//     dp[2] = 1;
//     for(int i=3;i<=n;i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     cout<<dp[n];
//     return 0;
// }