// WAYS TO DECLARE AND OUTPUT STRING
// #include<iostream>
// #include<string>

// using namespace std;
// int main()
// {
//     // string st;
//     // cin>>st;
//     // cout<<st;

//     // string st1(5, 'n');
//     // cout<<st1;

//     // string st2 = "RajatRai";
//     // cout<<st2;

//     string st3;
//     getline(cin, st3);
//     cout<<st3;


//     return 0;
// }


// SELF KNOWLEDGE
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main()
// {
//     string a = "Rajat";
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout<<a[a.size()-1-i];
//     }
//     return 0;
// }



// SELF KNOWLEDGE
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    static char mess[6][30] = {"Don't walk in front of me...", 
                               "I may not follow;", 
                               "Don't walk behind me...", 
                               "Just walk beside me...", 
                               "And be my friend." };

    printf("%c, %c\n", *(mess[0]), *(*(mess+0)+2));
    return 0;
}