#include <iostream>
using namespace std;
#define n 100

class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 || front>back){
            cout<<"No element present in queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"No element present in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    void Display(){
        if(front==-1 || front>back){
            cout<<"No element present in queue"<<endl;
            return;
        }
        for(int i=front;i<=back;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool Empty(){
        if(front==-1 or front>back){
            return true;
        }
        return false;
    }
};

int main(){
    queue st;
    // **************************************
    st.enqueue(1);
    st.enqueue(2);
    st.enqueue(3);
    st.enqueue(4);
    st.Display();

    // **************************************
    cout<<"POPED ELEMENT"<<endl;
    cout<<st.peek()<<endl;
    st.dequeue();
    st.Display();

    // **************************************
    cout<<"POPED ELEMENT"<<endl;
    cout<<st.peek()<<endl;
    st.dequeue();
    st.Display();

    // **************************************
    cout<<"POPED ELEMENT"<<endl;
    cout<<st.peek()<<endl;
    st.dequeue();
    st.Display();

    // **************************************
    cout<<"POPED ELEMENT"<<endl;
    cout<<st.peek()<<endl;
    st.dequeue();
    st.Display();

    // **************************************
    if(st.Empty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }

    return 0;
}


