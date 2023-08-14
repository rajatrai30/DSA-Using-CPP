// STACK IMPLEMENTATION
#include <iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void Push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void Pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
        cout<<arr[top+1]<<" is deleted from the Stack."<<endl;
    }

    int Top(){
        if(top==-1){
            cout<<"No element present in stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool Empty(){
        return top==-1;
    }

    void Display(){
        if(top==-1){
            cout<<"No element present in stack"<<endl;
            return;
        }
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    stack st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Display();

    st.Pop();
    st.Display();

    st.Pop();
    st.Pop();
    st.Pop();
    st.Display();

    st.Top();

    return 0;
}


