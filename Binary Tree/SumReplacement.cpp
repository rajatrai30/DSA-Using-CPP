// SUM REPLACEMENT IN BINARY TREE MEANS:
// REPLACE THE VALUE OF THE EACH NODE WITH THE SUM OF ALL SUBTREE NODES AND ITSELF
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void SumReplace(Node* root){
    if(root==NULL){
        return;
    }
    SumReplace(root->left);
    SumReplace(root->right);
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}

void Preoder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preoder(root->left);
    Preoder(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    Preoder(root);
    cout<<endl;

    //Sum Replace Function Call
    SumReplace(root);
    Preoder(root);

    return 0;
}


