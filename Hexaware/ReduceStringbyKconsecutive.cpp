#include <iostream>
#include <string>
using namespace std;

string reduceString(const string& str, int k) {
    string result;
    int count=1;
    for(int i=0;i<str.length();i++){
        if(i<str.length()-1 && str[i] == str[i+1]){
            count++;
        }
        else{
            if(count<k){
                result += string(count, str[i]);
            }
            count=1;
        }
    }
    return result;
}

int main() {
    string input;
    int k;

    cout << "Enter a string: ";
    cin >> input;

    cout << "Enter the value of K: ";
    cin >> k;

    string reducedString = reduceString(input, k);

    cout << "Reduced string: " << reducedString << endl;

    return 0;
}
