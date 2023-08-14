#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

// ****************** APPEND K NODES IN LINKED LIST*****************
int length(node* head){
    node* temp=head;
    int l=0;
    while (temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newTail;
    node* newHead;
    node* Tail=head;
    int l = length(head);
    k=k%l;
    int count=1;
    while(Tail->next!=NULL){
        if(count==l-k){
            newTail=Tail;
        }
        if(count==l-k+1){
            newHead=Tail;
        }
        Tail=Tail->next;
        count++;
    }
    newTail->next=NULL;
    Tail->next=head;
    return newHead;
}

void InsertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        InsertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead=kappend(head,3);
    display(newhead);
    return 0;
}

