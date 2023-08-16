// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int a[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     int mx=INT_MIN;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(a[i]>a[i+1] && a[i]>mx){
//             ans++;
//         }
//         mx=max(mx,a[i]);
//     }
//     cout<<ans<<endl;
//     cout<<"No of Record Breaking Days: "<<ans<<endl;
//     cout<<"The biggest record breaking day: "<<mx<<endl;
//     return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// void Reversed(int a[], int s, int e){
//     while (s<e)
//     {
//         // int temp = a[s];
//         // a[s]=a[e];
//         // a[e]=temp;
//         // a[s]=a[s]^a[e];
//         // a[e]=a[s]^a[e];
//         // a[s]=a[s]^a[e];
//         s++;
//         e--;
//     }
// }
// int main()
// {
//     int a[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     //Reversing the array
//     Reversed(a,0,n-1);
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// MACRO DEFINITION***************************************
// #include<iostream>
// #include<vector>
// using namespace std;
// #define vi vector<int>
// #define vvi vector<vi>
// #define pii pair<int,int>
// #define vpii vector<pii>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)
// MACRO DEFINITION***************************************


// BEST TIME TO BUSY AND SELL THE STOCK
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int minisoFar = prices[0];
//         int maxprofit = 0;
//         for(int i=0;i<n;i++){
//             minisoFar = min(prices[i], minisoFar);
//             int profit = prices[i] - minisoFar;
//             maxprofit = max(profit, maxprofit);
//         }
//         return maxprofit;
//     }
// };


// findKthLargest****************************
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         std::sort(nums.begin(), nums.end(), std::greater<int>());
//         return nums[k-1];
//     }
// };




