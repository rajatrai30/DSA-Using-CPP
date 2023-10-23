#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool isAnagram(const string& str1, const string& str2){
    if(str1.length() != str2.length()){
        return false;
    }
    string sortedStr1 = str1;
    string sortedStr2 = str2;
    
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());

    return sortedStr1 == sortedStr2;
}

int main()
{
	string a;
	cin>>a;
    string b;
    cin>>b;
	if(isAnagram(a,b)){
		cout<<"anagramsssss";
	}
	else{
		cout<<"not anagra,mssss";
	}
    return 0;
}