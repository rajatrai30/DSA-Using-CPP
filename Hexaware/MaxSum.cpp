#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    int Maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
        Maxi = max(Maxi, a[i]);
    }
    cout << Maxi;
    return 0;
}