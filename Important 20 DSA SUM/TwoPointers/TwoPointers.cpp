#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// MAKING A FUNCTION WHICH TAKES AN ARRAY AND A TARGET TO SUM OF THE PAIRS

void findPairsWithSum(vector<int>& arr, int target){
    // sort the array
    sort(arr.begin(), arr.end());
    // initialize two pointers
    int left = 0;
    int right = arr.size() - 1;
    // loop until left is less than right
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout<<"("<<arr[left]<<", "<<arr[right]<<")"<<endl;
            left++;
            right--;
        }
        else if (sum<target){
            left++;
        }
        else{
            right--;
        }
    }
}

// DRIVER PROGRAM 1
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 10;
    findPairsWithSum(arr, target);
    return 0;
}