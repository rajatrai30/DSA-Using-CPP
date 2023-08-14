// // MINIMUM SQUARES REQUIRED TO GET THE NUMBER
// #include<iostream>
// using namespace std;

// const int N = 1e5+2;
// const int MOD = 1e3+2;
// int dp[N];

// int MinSquare(int n){
//     if(n==1 || n==2 || n==3 || n==0){
//         return n;
//     }

//     if(dp[n]!=MOD){
//         return dp[n];
//     }

//     for(int i=1; i*i<=n; i++){
//         dp[n] = min(dp[n], 1+MinSquare(n-i*i));
//     }
//     return dp[n];
// }

// signed main(){
//     for(int i=0; i<N; i++){
//         dp[i] = MOD;
//     }
//     int n;
//     cin>>n;
//     cout<<MinSquare(n);
//     return 0;
// }

// USING BOTTOM UP APPROACH
// #include<iostream>
// using namespace std;
// #define vi vector<int>;
// #define MOD 1e9+7;
// int main(){
//     int n;
//     cin>>n;
//     int dp[n+1];
//     dp[0] = 0;
//     dp[1] = 1;
//     dp[2] = 2;
//     dp[3] = 3;

//     return 0;
// }