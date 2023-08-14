// // MATRIX MULTIPLICATION
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int a[n1][n2];
//     int b[n2][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin>>b[i][j];
//         }
//     }
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 ans[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int target;
//     cin>>target;
//     bool found=false;
//     int r=0, c=m-1;
//     while(r<n and c>=0){
//         if(a[r][c] == target){
//             cout<<r<<" "<<c;
//             found = true;
//             break;
//         }
//         else if(a[r][c] > target){
//             c--;
//         }
//         else{
//             r++;
//         }
//     }
//     if(found){
//         cout<<"Element Found";
//     }
//     else{
//         cout<<"Element Not Found";
//     }
//     return 0;
// }


// SPIRAL MATRIXXX
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"Enter Array elements: ";
//             cin>>a[i][j];
//         }
//     }
//     int rs=0, re=n-1, cs=0, ce=m-1;
//     for(int col=cs;col<=ce;col++){
//         cout<<a[rs][col]<<" ";
//     }
//     rs++;
//     for(int row=rs;row<=rs;row++){
//         cout<<a[row][ce]<<" ";
//     }
//     ce--;
//     for(int col=ce;col>=cs;col--){
//         cout<<a[re][col];
//     }
//     re--;
//     for(int row=re;re>=rs;row--){
//         cout<<a[row][cs];
//     }
//     cs++;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter Array elements: ";
            cin>>a[i][j];
        }
    }
    cout<<"Normal Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
