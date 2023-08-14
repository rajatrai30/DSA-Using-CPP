#include<iostream>
#include<climits>

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

    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        maxno=max(maxno,a[i]);
        minno=min(minno,a[i]);
    }
    cout<<"Maxno: "<<maxno<<" "<<"Minno: "<<minno<<endl;
    return 0;
}
