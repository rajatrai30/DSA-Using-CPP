// LINKED LIST BASICS AND REVERSE A LINKED LIST
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

// ******************** TO CHECK IF CYCLE IS PRESENT IN LINKED LIST OR NOT
// MAKECYCLE IN LINKED LIST
void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool DetectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void RemoveCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (fast!=slow);
    fast=head;
    while (fast->next!=slow->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

// ******************** TO CHECK IF CYCLE IS PRESENT IN LINKED LIST OR NOT *******************************


// REVERSE K NODES
node* Reversek(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=Reversek(nextptr,k);
    }
    return prevptr;
}


// REVERSE A LINKED LIST FUNCTION USING RECURSIVE METHOD
node* ReverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newNode = ReverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}



// REVERSE A LINKED LIST FUNCTION USING ITERATOR METHOD
node* Reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}


// SEARCH ELEMENT
bool Search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

// DELETE ELEMENT
// void Delete(node* &head, int val){
//     if(head==NULL){
//         return;
//     }   
//     if(head->next==NULL){
//         DeleteAtHead(head);
//         return;
//     }
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node* toDelete = temp->next;
//     temp->next=temp->next->next;
//     delete toDelete;
// }

// DELETE AT HEAD
// void DeleteAtHead(node* &head){
//     node* todelete = head;
//     head=head->next;
//     delete todelete;
// }

// INSERT AT HEAD
void InsertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

// INSERT AT TAIL
void InsertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

// DISPLAY
void Display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


// MAIN FUNCTION
int main()
{
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    // Display(head);
    

    // InsertAtHead(head,1);
    // InsertAtHead(head,2);
    // InsertAtHead(head,3);
    // InsertAtHead(head,4);
    // Display(head);
    // cout<<Search(head,4)<<endl;
    // DeleteAtHead(head);

    // ITERATIVE METHOD
    // Display(head);
    // node* naya = Reverse(head);
    // Display(naya);

    // REVERSE RECURSIVE METHOD
    // Display(head);
    // node* naya = ReverseRecursive(head);
    // Display(naya);

    // REVERSE K NODES
    // Display(head);
    // node* naya = Reversek(head,2);
    // Display(naya);

    // CYCLE IN LINKED LIST
    Display(head);
    makeCycle(head,3);
    // Display(head);
    cout<<DetectCycle(head)<<endl;

    // REMOVE CYCLE IN LINKED LIST
    // makeCycle(head,3);
    // cout<<DetectCycle(head)<<endl;
    // RemoveCycle(head);
    // cout<<DetectCycle(head)<<endl;
    // Display(head);

    return 0;
}
