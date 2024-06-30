//Check if a binary tree is binary search tree or not
//No duplicates are present

//Subtree Comparison Method
#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;
};

// Function to check if all nodes in the subtree are less than the given value
bool IsSubTreeLesser( Node *root, int value){
    if( root == NULL) return true; // Base case: empty subtree is always lesser
    // Check current node and recursively check left and right subtrees
    if( root->data <= value
        && IsSubTreeLesser(root->left, value)
        && IsSubTreeLesser(root->right, value))
        return true;
    else return false;    
}

// Function to check if all nodes in the subtree are greater than the given value
bool IsSubtreeGreater( Node *root, int value){
   if( root == NULL) return true; // Base case: empty subtree is always greater
   // Check current node and recursively check left and right subtrees
   if( root->data > value
       && IsSubtreeGreater(root->left, value)
       && IsSubtreeGreater(root->right, value))
       return true;
    else 
       return false;   
}

// Function to check if a tree is a binary search tree
bool IsBinarySearchTree(Node *root){
    if( root == NULL) return true; // Base case: empty tree is a BST
    // Check current node, left and right subtrees
    if( IsSubTreeLesser(root->left, root->data)
        && IsSubtreeGreater(root->right, root->data)
        && IsBinarySearchTree(root->left)
        && IsBinarySearchTree(root->right))
        return true;
    else return false;    
}

// Function to insert a new node in the binary search tree
Node *Insert(Node *root, int data){
    if( root == NULL){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if( data <= root->data ){
        root = Insert(root->left, data);
    }
    else root = Insert(root->right, data);
    return root;
}

int main(){
  Node *root = NULL;
  root = Insert(root, 7); root = Insert(root, 4);
  root = Insert(root, 9); root = Insert(root, 1);
  root = Insert(root, 6); root = Insert(root, 3);
  if( IsBinarySearchTree(root)) 
     cout << "It is a Binary Search Tree" << endl;
  else
     cout << "it is not a Binary Search Tree" << endl;   
}