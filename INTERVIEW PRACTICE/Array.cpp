#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    int mx=INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1] && a[i]>mx){
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
    cout<<"No of Record Breaking Days: "<<ans<<endl;
    cout<<"The biggest record breaking day: "<<mx<<endl;
    return 0;
}
