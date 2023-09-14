#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    int m = INT_MAX;
    cin >> s;
    unordered_map<char, int> F;
    for(auto i:s){
        F[i]++;
    }
    for(auto i:F){
        m = min(m,i.second);
    }
    for(auto i:s){
        if(F[i] == m){
            cout << i;
            break;
        }
    }
    return 0; // Add a return statement at the end of the main function
}
