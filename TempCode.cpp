// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     for(int num:a){
//         cin>>num;
//     }
//     for(int num:a){
//         cout<<num<<" ";
//     }
//     return 0;
// }

// TIME PASS PRATICE STUFF
#include<iostream>
#include<vector>
using namespace std;

vector<int> SorterFunc(vector<int> a){
    int n = a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    return a;
}

int main()
{
    vector<int> a, res;

    for(int num:a){
        cin>>num;
    }
    SorterFunc(a);
    for(int num:a){
        cout<<num<<" ";
    }
    return 0;
}