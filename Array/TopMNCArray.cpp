// PRINT THE POSSIBLE SUB ARRRAYS (SIMPLE ARRAY PROBLEM)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// MAXIMUM SUB ARRAY SUM (TO FIND THE MAXIMUM SUM ) OF THE SUB ARRAY 
// BRUTE FORCE APPROACH COMPLEXITY = o(n^3)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int MaxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//             }
//             MaxSum = max(MaxSum,sum);
//         }
//     }
//     cout<<MaxSum<<endl;
//     return 0;
// }

// MAXIMUM SUB ARRAY SUM USING (CUMULATIVE SUM APPROACH)
// CUMULATIVE SUM APPROACH COMPLEXITY = 0(n^2)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int currsum[n+1];
//     currsum[0]=0;
//     for(int i=1;i<=n;i++){
//         currsum[i]=currsum[i-1]+a[i-1];
//     }
//     int maxSum = INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum = currsum[i] - currsum[j];
//             maxSum=max(maxSum,sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }


// MAXIMUM SUB ARRAY SUM USING (KADANE'S ALGORITHM) **THE BEST SOLUTION**
// KADANE'S ALGORITHM COMPLEXITY = 0(n)
// INCLUDE ONLY POSITIVE INTEGERS (THAT GIVES MAX SUM OF SUB ARRAY)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int curSum=0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         curSum+=a[i];
//         if(curSum<0){
//             curSum=0;
//         }
//         maxSum=max(maxSum,curSum);
//     }
//     cout<<maxSum<<endl; 
//     return 0;
// }


// MAXIMUM CIRCULAR SUB ARRAY SUM
// TWO CASES: WRAPPING AND UNWRAPPING
// NON-WRAPPING = {-1, 4, -6, 7, 5, -4} *** NO NEED TO GO THE FIRST ELEMENT AGAIN *** 
// ======> DONE SIMPLY BY USING KADANE'S ALGORITHM
// WRAPPING = {4, -4, 6, -6, 10, -11, 12} *** GO AGAIN TO THE FIRST ELEMENT TO GET THE MAX SUM ***
// ======> TOTALSUM - (-KADANE'S SUM)     *** NONWARPPING ELEMENTS ==== NON-CONTRIBUTING ELEMENTS
// ======> WRAPSUM = TOTALSUM - (-NON-CONTRIBUTING ELEMENTS)
// #include<iostream>
// #include<climits>
// using namespace std;
// int kadane(int a[], int n){
//     int curSum=0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         curSum+=a[i];
//         if(curSum<0){
//             curSum=0;
//         }
//         maxSum=max(maxSum,curSum);
//     }
//     return maxSum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int nonwrapsum;
//     int wrapsum;
//     int totalSum=0;
//     nonwrapsum=kadane(a,n);
//     for(int i=0;i<n;i++){
//         totalSum+=a[i];
//         a[i]=-a[i];
//     }
//     wrapsum=totalSum + kadane(a,n);
//     cout<<max(wrapsum,nonwrapsum)<<endl;
//     return 0;
// }



// PAIR SUM PROBLEM
// SUM OF TWO PAIRS IS= TO GIVEN K
// #include<iostream>
// #include<climits>
// using namespace std;
// bool pairSum(int a[], int n, int k){
//     int low=0;
//     int high=n-1;
//     for(int i=0;i<n;i++){
//         if(a[low]+a[high] == k){
//             cout<<a[low]<<" "<<a[high]<<endl;
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if (a[low]+a[high]>k)
//         {
//             high--;
//         }
//         else{
//             low++;
//         } 
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     int k=31;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<pairSum(a,n,k)<<endl;
//     return 0;
// }














// ************** VERY VERY HARD SUM **********************
// FIRST REPEATING ELEMENT
// IN THE ARRAY OF INTEGERS I.E.
// AN ELEMENT THAT OCCURS MORE THAN ONCE AND WHOSE INDEX OF FIRST OCCURENCE IS SMALLEST
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter no of elements in an Array:"<<endl;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter Array elements: ";
//         cin>>a[i];
//     }
//     const int N=1e6+2;
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }
//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[a[i]]!=-1){
//             minidx=min(minidx,idx[a[i]]);
//         }
//         else{
//             idx[a[i]]=i;
//         }
//     }
//     if(minidx==INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx+1<<endl;
//     }
//     return 0;
// }


// SUBARRAY WITH GIVEN SUM
// GIVEN AN ARRAY OF N ELEMENTS NON NEGATIVE INTERGERS, FIND A CONTINUOUS SUBARRAY WHICH ADDS TO A GIVEN NO S
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n,s;
//     cin>>n>>s;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int i=0,j=0,st=-1,en=-1,sum=0;
//     while(j<n && sum + a[j]<=s){
//         sum+=a[j];
//         j++;
//     }
//     if(sum==s){
//         cout<<i+1<<" "<<j<<endl;
//         return 0;
//     }
//     while(j<n){
//         sum+=a[j];
//         while(sum>s){
//             sum-=a[i];
//             i++;
//         }
//         if(sum==s){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;   
//     }
//     cout<<st<<" "<<en<<endl;
//     return 0;
// }

// SMALLEST POSITIVE MISSING NUMBER
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     const int N = 1e6+2;
//     bool check[N];
//     for(int i=0;i<N;i++){
//         check[i]=false;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i] >= 0){
//             check[a[i]] = true;
//         }
//     }
//     int ans=-1;
//     for(int i=1;i<N;i++){
//         if(check[i] == false){
//             ans = i;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

