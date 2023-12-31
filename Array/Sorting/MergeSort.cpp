// MERGE SORT
// Time Complexity: O(nlogn)
#include<iostream>
using namespace std;

void Merge(int arr[], int mid, int l, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;
    }
}

void MergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,mid,l,r);
    }
}

int main()
{
    int a[]={5,4,3,2,1};
    MergeSort(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
