// #include<iostream>
// using namespace std;
// void Reverse(string s){
//     if(s.length() == 0){
//         return;
//     }
//     string rest = s.substr(1);
//     Reverse(rest);
//     cout<<s[0]<<" ";
// }
// int main()
// {
//     string a;
//     cin>>a;
//     Reverse(a);
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
