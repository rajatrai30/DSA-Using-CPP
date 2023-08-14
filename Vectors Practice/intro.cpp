#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(-5);
    v.push_back(0);

    vector<int> v2 (3,50); // 50 50 50


    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<*it<<endl;
    // }

    // for(auto element:v){
    //     cout<<element<<endl;
    // }

    // v.pop_back(); // 1 2

    // swap(v,v2);
    // for(auto element:v){
    //     cout<<element<<endl;
    // }
    // for(auto element:v2){
    //     cout<<element<<endl;
    // }

    // sort(v.begin(),v.end());
    // for(auto element:v){
    //     cout<<element<<endl;
    // }

    return 0;
}