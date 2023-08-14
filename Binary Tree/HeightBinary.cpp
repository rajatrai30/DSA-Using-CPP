#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        int data=val;
        left=NULL;
        right=NULL;
    }
};

int CalcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = CalcHeight(root->left);
    int rheight = CalcHeight(root->right);
    return max(lheight, rheight) + 1;
}

// YAHA PAR CURRENT DIAMETER LHEIGHT + RHEIGHT +1 KE EQUAL HAI
// AUR LEFT AUR RIGHT SUBTREE KE DIAMETER MEI SE MAXIMUM LE LIYA HAI
// ISSE HUMARA TIME COMPLEXITY O(N^2) HO JAYEGA
int CalDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = CalcHeight(root->left);
    int rheight = CalcHeight(root->right);
    int currDiameter = lheight + rheight + 1;
    int lDiameter = CalDiameter(root->left);
    int rDiameter = CalDiameter(root->right);
    return max(currDiameter, max(lDiameter, rDiameter));
}

// OPTIMIZED VERSION OF DIAMETER FUNCTION O(N)
// HUM ALAG SE CALCULATE HEIGHT FUNCTION CALL NHI KAR RHE HAI
// HUM UNHI RECURSION CALLS MEI HEIGHT KO PASS KAR RHE HAI
// ISSE HUMARA TIME COMPLEXITY O(N) HO JAYEGA
int OptCalDiameter(Node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }
    int lh=0, rh = 0;
    int lDiameter = OptCalDiameter(root->left, &lh);
    int rDiameter = OptCalDiameter(root->right, &rh);
    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currDiameter, max(lDiameter, rDiameter));

}

int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(8);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    // HEIGHT OF THE TREE
    cout<<"Height: "<<CalcHeight(root);
    cout<<endl;

    // DIAMETER OF THE TREE
    cout<<"Diameter: "<<CalDiameter(root);
    cout<<endl;

    // OPTIMIZED VERSION OF DIAMETER FUNCTION O(N)
    int height = 0;
    cout<<"Diameter: "<<OptCalDiameter(root, &height);
    return 0;
}


