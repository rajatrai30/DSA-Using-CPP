#include<iostream>
#include<climits>
using namespace std;

int FindLarge(int a[], int n){
    if(n<=0){
        return -1;
    }
    int test = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>test){
            test=a[i];
        }
    }
    return test;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    int large = FindLarge(arr, n);
    cout<<large<<endl;
    return 0;
}