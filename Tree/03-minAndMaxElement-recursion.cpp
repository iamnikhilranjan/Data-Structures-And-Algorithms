//To find minimum and maximum element using recursion in a BST
#include <iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};

//To find minimum number
int FindMin(BstNode *root){
    if( root==NULL){
        cout << "Error: tree is empty" << endl;
        return -1;
    }
    else if( root->left == NULL){
        return root->data;
    }
    //search in left subtree;
    return FindMin(root->left);
}

//To find maximum number
int findMax(BstNode *root){
    if( root == NULL){
        cout << "Error: Tree is emoty" << endl;
        return -1;
    }
    else if( root->right == NULL){
        return root->data;
    }
    //search in left subtreegit 
    return findMax(root->right);
}
int main(){
    return 0;
}
