#include <iostream>
using namespace std;


int cuckoo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else {
        return 1*cuckoo(n-1)+2*cuckoo(n-2)+3*1;
    }
}

int main() {
    int n;
    cin >> n;
    int result=cuckoo(n);
    cout << result;
    return 0;
}