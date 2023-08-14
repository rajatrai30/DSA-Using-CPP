// MATRIX MULTIPLICATION
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];


    // input for m1
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<"Enter Array elements for m1: ";
            cin>>m1[i][j];
        }
    }
    //input for m2
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cout<<"Enter Array elements for m2: ";
            cin>>m2[i][j];
        }
    }

    // INITIALIZE SUM MATRIX
    int sum[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            sum[i][j]=0;
        }
    }
    
    // ADDITION LOGIC
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                sum[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    
    // PRINT SUM
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}