// BALANCED HEIGHT
// FOR EACH NODE THE DIFFERENCE BETWEEN THE HEIGHTS OF THE LEFT SUB-TREE AND RIGHT SUB-TREE SHOULDE BE <= 1 , 0 will be accepted
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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight, rheight) + 1;
}

// COMPLEXITY O(N^2)
bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}

// OPTIMIZED VERSION OF ISBALANCED FUNCTION O(N)
bool OptisBalanced(Node* root, int* height){
    if(root==NULL){
        return true;
    }
    int lh =0, rh=0;
    if(OptisBalanced(root->left, &lh) == false){
        return false;
    }
    if(OptisBalanced(root->right, &rh) == false){
        return false;
    }
    *height = max(lh, rh) + 1;
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    // BALANCED TREE STRUCTURE
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    if(isBalanced(root)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }

    // *************************************************************************//

    // UNBALANCED TREE STRUCTURE
    struct Node* root1 = new Node(1);
    root1->left=new Node(2);
    root1->left->left=new Node(4);
    root1->left->left=new Node(4);
    root1->left->left->left=new Node(4);

    if(isBalanced(root1)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }

    // *************************************************************************//
    
    // OPTMIZED FUNCTION TEST
    int height = 0;
    if(OptisBalanced(root1, &height)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }






    return 0;
}


