#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    int miniSofar=a[0];
    int profit;
    int maxProfit=0;
    for (int i = 0;i<n; i++){
        miniSofar = min(a[i], miniSofar);
        profit = a[i] - miniSofar;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;  
}

int main()
{
    int n;
    int result;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
        cin >> price[i];
    result = solve(price, n);
    cout << result;
}