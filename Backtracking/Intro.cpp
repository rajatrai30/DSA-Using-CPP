// RAT IN A MAZE PROBLEM
#include<iostream>
using namespace std;

bool isSafe(int** a, int x, int y, int n){
    if(x<n && y<n && a[x][y] == 1){
        return true;
    }
    return false;
}

bool RatinMaze(int** a, int x, int y, int n, int** SolArray){
    if(x==n-1 && y==n-1){
        SolArray[x][y]=1;
        return true;
    }
    if(isSafe(a,x,y,n)){
        SolArray[x][y]=1;
        if(RatinMaze(a,x+1,y,n,SolArray)){
            return true;
        }
        if(RatinMaze(a,x,y+1,n,SolArray)){
            return true;
        }
        SolArray[x][y]=0;   //BACKTRACKING TO ORGINAL POINT AS SOLUTION NOT FOUND.
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** a = new int*[n];
    for(int i=0;i<n;i++){
        a[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int** SolArray = new int*[n];

    for(int i=0;i<n;i++){
        SolArray[i] = new int[n];
        for(int j=0;j<n;j++){
            SolArray[i][j] = 0;
        }
    }
    if(RatinMaze(a,0,0,n,SolArray)){
        cout<<"The path is:"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<< SolArray[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1