//find height of a binary tree
#include <iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};

//function to create a new node in heap
BstNode *GetNewNode(int data){
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//To insert data in BST, returns address of root node
BstNode *Insert( BstNode *root, int data){
    if( root == NULL){
        root = GetNewNode(data);
    }
    else if( root->data >= data){
        root->left = Insert( root->left, data);
    }
    else{
        root->right = Insert( root->right, data);
    }
    return root ;
}

int FindHeight( BstNode *root){
    if( root == NULL){
        return -1;
    }

    int leftHeight = FindHeight(root->left);
    int rightHeight = FindHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main(){
   BstNode *root = NULL; //creating an empty tree
   root = Insert(root, 45);
   root = Insert(root, 41);
   root = Insert(root, 43);
   root = Insert(root, 14);
   root = Insert(root, 44);
   root = Insert(root, 49);
   root = Insert(root, 48);
   
   cout << "Height of the tree is: " << FindHeight(root);
   return 0;
}