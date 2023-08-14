// LINEAR SEARCH
// Time Complexity: O(n)
#include<iostream>
using namespace std;


int linearSearch(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
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
    cout<<linearSearch(a,n,key)<<endl;
    return 0;
}
