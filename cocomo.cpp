// LOWERCASE TO UPPERCASE
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a = "VJTI";
	for(int i=0;i<a.size();i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
    cout<<a;
    return 0;
}