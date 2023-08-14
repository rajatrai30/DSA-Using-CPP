// TRANSPOSE MATRIX 1ST METHOD
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
//     cout<<"Normal Matrix:"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Transpose Matrix:"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// TRANSPOSE MATRIX 2ND METHOD
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     cout<<"Normal Matrix:"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Transpose Matrix:"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }