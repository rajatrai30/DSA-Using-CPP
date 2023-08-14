// BINARY SEARCH
// Time Complexity: O(logn)
#include<iostream>
using namespace std;


int BinarySearch(int a[], int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }    
    return -1;
}

int main()
{
    int a[100];
    int n;
    cout << "Enter no of elements in an Array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Array elements: ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    int key;
    cout <<"Enter key to search: ";
    cin>>key;
    cout<<BinarySearch(a,n,key)<<endl;
    return 0;
}
