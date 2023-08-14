// MATRIX SEARCH
#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter Array elements: ";
            cin>>a[i][j];
        }
    }
    int target;
    cin>>target;
    bool found=false;
    int r=0,c=m-1;

    while(r<n and c>=0){
        if(a[r][c] == target){
            cout<<r<<" "<<c;
            found = true;
        }
        if(a[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }

}