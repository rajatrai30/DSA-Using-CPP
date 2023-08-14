// DOUBLY LINKED LIST
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};


void DeleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}

void Delete(node* &head, int pos){
    node* temp=head;
    if(pos==1){
        DeleteAtHead(head);
    }
    int count =1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    delete temp;
}

void InsertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;   
}

void InsertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        InsertAtHead(head,val);
        return;
    }
    node* temp = head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void Display(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);

    // INSERT AT HEAD
    // Display(head);
    // InsertAtHead(head,7);
    // Display(head);

    // DELETE FUNCTIONS
    // Display(head);
    // Delete(head,5);
    // Display(head);

    // DELETE AT HEAD
    Display(head);
    DeleteAtHead(head);
    Display(head);


    return 0;

}