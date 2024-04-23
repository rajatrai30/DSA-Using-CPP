#include<iostream>
#include<vector>
using namespace std;

// FUNCTION TO MERGE TWO ARRAYS
vector<int> MergeSortedArray(const vector<int>& arr1, const vector<int>& arr2){
    vector<int> result;
    int i=0,j=0;
    // LOOP TO TRACK AND STORE THE DATA
    // i->arr1 and j->arr2 (logic just like we do in merge sort)
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else{
            result.push_back(arr2[j]);
            j++;
        }
    }
    // LOGIC TO CHECK IF ANY ELEMENT LEFT OF BOTH THE ARRAYS
    while(i<arr1.size()){
        result.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        result.push_back(arr2[j]);
        j++;
    }
    return result;
}

int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6,8,10};
    vector<int> Resultant = MergeSortedArray(arr1, arr2);
    for(int num:Resultant){
        cout<<num<<" ";
    }
    return 0;
}