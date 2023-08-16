// MAX TILL ith Value
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int a[100];
//     int n;
//     cout << "Enter no of elements in an Array:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter Array elements: ";
//         cin>>a[i];
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<a[i]<<" "<<endl;
//     // }
//     int maxno=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxno=max(maxno,a[i]);
//         cout<<maxno<<endl;
//     }
//     return 0;
// }


// SUM OF SUB ARRAYS
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100];
//     int n;
//     cout << "Enter no of elements in an Array:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter Array elements: ";
//         cin>>a[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=a[j];
//             cout<<a[j]<<endl;
//         }
//     }
//     return 0;
// }

// KADANE'S ALGORITHM
// class Solution{
//     public:
//     long long maxSubarraySum(int arr[], int n){  
//         // Your code here
//         long max = INT_MIN;
//         long sum = 0;
//         for(int i=0;i<n;i++){
//             sum += arr[i];
//             if(sum>max){
//                 max=sum;
//             }
//             if(sum<0){
//                 sum=0;
//             }
//         }
//         return max;
//     }
// };


// MAXIMUM SUBARRAY LENGTH 2 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100];
//     int n;
//     cout << "Enter no of elements in an Array:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter Array elements: ";
//         cin>>a[i];
//     }
//     int ans=2;
//     int pd=a[1]-a[0];
//     int j=2;
//     int curr=2;
//     while(j<n){
//         if(pd==a[j]-a[j-1]){
//             curr++;
//         }
//         else{
//             pd=a[j]-a[j-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// RECORD BREAKING DAYS
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter no of elements in an Array:"<<endl;
//     cin>>n;
//     int a[n+1];
//     a[n]=-1;
//     for(int i=0;i<n;i++){
//         cout<<"Enter Array elements: ";
//         cin>>a[i];
//     }

//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }
//     int ans=0;
//     int mx=INT_MIN;
    
//     for(int i=0;i<n;i++){
//         if(a[i]>mx && a[i]>a[i+1]){
//             ans++;
//         }
//         mx=max(mx,a[i]);
//     }
//     cout<<"No of Record Breaking Days: "<<ans<<endl;
//     cout<<"The biggest record breaking day: "<<mx<<endl;

//     return 0;
// }

