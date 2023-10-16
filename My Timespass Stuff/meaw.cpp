// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     string name;
//     // Add the speak() method as a virtual function
//     virtual void speak() {
//         cout << "Animal speaks!" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void speak() override {
//         cout << "Woof!" << endl;
//     }
// };

// class Cat : public Animal
// {
// public:
//     void speak() override {
//         cout << "Meow!" << endl;
//     }
// };

// int main() {
//     Cat c1;
//     c1.name = "Fluffy";
//     Dog d1;
//     d1.name = "Bingo";

//     Animal* a1 = &c1;
//     Animal* a2 = &d1;

//     Animal* arr[] = {a1, a2};
//     for (int i = 0; i < 2; i++) {
//         arr[i]->speak();
//     }

//     return 0;
// }



// STRING REVERSE
#include<iostream>
using namespace std;

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "Hello", str2[20] = " World";
    printf("%s\n", strcpy(str2, strcat(str1, str2)));
    return 0;
}

// int main(){
//     string s = "Rajat";
//     for(int i=0;i<s.size()/2;i++){
//         int temp = s[i];
//         s[i] = s[s.size()-i-1];
//         s[s.size()-i-1] = temp;
//     }
//     cout<<s;
//     return 0;
// }