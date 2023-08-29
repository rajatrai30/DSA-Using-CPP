// BUBBLE SORT
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

    int count = 1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

                // a[i]=a[i]^a[i+1];
                // a[i+1]=a[i]^a[i+1];
                // a[i]=a[i]^a[i+1];
            }
        }
        count++;
    }


    cout<<"\nSorted Array: ";
    cout<<"Array after Bubble sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
