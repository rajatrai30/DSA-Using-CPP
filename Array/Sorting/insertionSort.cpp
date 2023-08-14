// INSERTION SORT
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
    for(int i=1;i<n;i++){
        int current = a[i];
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
    cout<<"\nSorted Array: ";
    cout<<"Array after Insertion sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
