// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "VJTI";
// 	for(int i=0;i<a.size();i++){
// 		if(a[i] >= 'A' && a[i] <= 'Z'){
// 			a[i] += 32;
// 		}
// 	}
//     cout<<a;
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
// 	string a;
// 	cin>>a;
// 	bool check = true;
// 	int n = a.size();
// 	for(int i=0;i<n/2;i++){
// 		if(a[i] != a[n-1-i]){
// 			check = false;
// 			break;
// 		}
// 	}
// 	if(check){
// 		cout<<"PALINDROME";
// 	}
// 	else{
// 		cout<<"NOT PALINDROME";
// 	}
//     return 0;
// }

// KADANE'S ALGORITHM
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
// 	int max = INT_MIN;
// 	int sum = 0;
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		sum += a[i];
// 		if(sum>max){
// 			max=sum;
// 		}
// 		if(sum<0){
// 			sum=0;
// 		}
// 	}
// 	cout<<max;
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && b>c){
		cout<<a;
	}
	else if(b>a && b>c){
		cout<<b;
	}
	else{
		cout<<c;
	}
    return 0;
}