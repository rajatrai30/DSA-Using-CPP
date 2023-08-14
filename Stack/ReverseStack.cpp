#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topelement = st.top();
    st.pop();
    InsertAtBottom(st,ele);
    st.push(topelement);
}

void Reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    Reverse(st);
    InsertAtBottom(st, ele);
}

int main() {
    stack<int> st;
    // Printing original Stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;


    // Printing Reversed Stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    Reverse(st);
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}