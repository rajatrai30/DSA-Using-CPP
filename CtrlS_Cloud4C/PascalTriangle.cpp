#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int line=1;line<=n;line++){
        // INIT VAL
        int value = 1;

        // SPACE
        for(int space=0;space<n-line;space++){
            cout<<"  ";
        }

        // VALUE
        for(int i=1;i<=line;i++){
            cout<<"   "<<value;
            value = value*(line-i)/i;
        }
        cout<<endl;
    }
    return 0;
}
































// for (int line = 1; line <= n; line++) {
//         // VALUE DECLARE
//         int value = 1;
        
//         // SPACE PRINT
//         for (int space = 0; space < n - line; space++) {
//             cout<<" ";
//         }

//         // VALUE PRINT
//         for (int i = 1; i <= line; i++) {
//             cout<<" "<<value;
//             value = value * (line - i) / i;
//         }
//         cout << endl;
//     }
//     return 0;