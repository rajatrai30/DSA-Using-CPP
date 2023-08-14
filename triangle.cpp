// 1 TO PRINT A RIGHT ANGLED TRIANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// *
// **
// ***
// ****
// *****
// ******

// 2 TO PRINT A RECTANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 4
// 4
// ****
// ****
// ****
// ****

// 3 TO PRINT A HOLLOW RECTANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row || j==1 || j==col)
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 5
// 5
// *****
// *   *
// *   *
// *   *
// *****

// 4 PRINT INVERTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 5
// *****
// ****
// ***
// **
// *

// 4 HALF PYRAMID AFTER 180DEG ROTATION
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";

//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 5
//     *
//    **
//   ***
//  ****
// *****

// 5 HALF PYRAMID USING NUMBERS
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 1
// 22
// 333
// 4444
// 55555


// 6 FLOYD'S TRIANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int count=1;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 


// 7 BUTTERFLY PATTERN
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *


// 8 INVERTED PATTERN
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// OUTPUT :
// 5
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1