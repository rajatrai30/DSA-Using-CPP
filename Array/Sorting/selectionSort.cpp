// SELECTION SORT
// Time Complexity: O(n^2)
#include<iostream>
using namespace std;

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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }  
    }
    cout<<"\nSorted Array: ";
    cout<<"Array after Selection sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
