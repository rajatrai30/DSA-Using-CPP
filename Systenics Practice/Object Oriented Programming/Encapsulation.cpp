#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;

    public:
        // SETTER FUNCTIONS
        void SetName(string n){
            name=n;
        }
        void SetAge(int a){
            if(a>0){
                age=a;
            }
        }

        // GETTER FUNCTIONS
        string GetName(){
            return name;
        }
        int GetAge(){
            return age;
        }
};

// IN ENCAPSULATION, WE HAVE BUNDLED THE COMPLETE data AND functions,
// SO THAT WE CAN USE IT IN A SINGLE OBJECT
int main(){
    Student s;
    s.SetName("Rajat");
    s.SetAge(20);

    // TO GET THE NAMES USING GETTER FUNCTION
    cout<<s.GetName()<<endl;
    cout<<s.GetAge()<<endl;
    return 0;
}