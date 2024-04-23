// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     for(int num:a){
//         cin>>num;
//     }
//     for(int num:a){
//         cout<<num<<" ";
//     }
//     return 0;
// }

// TIME PASS PRATICE STUFF
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> SorterFunc(vector<int> a){
//     int n = a.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }
//     return a;
// }

// int main()
// {
//     vector<int> a, res;
//     for(int num:a){
//         cin>>num;
//     }
//     SorterFunc(a);
//     for(int num:a){
//         cout<<num<<" ";
//     }
//     return 0;
// }

// TIME PASS PRATICE STUFF 3
#include <iostream>
using namespace std;
int ReturnLargest(int a[], int n){
    int max = a[0];
    for (int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    // cout<<"Hello World";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = ReturnLargest(arr,n);
    cout<<largest;
    return 0;   
}