// Check if a binary tree is binary search tree or not
// range menthod

#include <iostream>
#include <climits>
using namespace std;

struct Node{
    int data;
    Node *left; 
    Node *right;
};

// Function to check if the tree is a BST within a given range
bool IsBstUntil(Node *root, int minValue, int maxValue) {
    if (root == NULL) return true; // An empty tree is a BST

    // Check if the current node's value is within the valid range
    if (root->data > minValue
        && root->data < maxValue
        // Recursively check the left and right subtrees with updated ranges
        && IsBstUntil(root->left, minValue, root->data)
        && IsBstUntil(root->right, root->data, maxValue))
        return true;
    else 
        return false;    
}

// Wrapper function to initiate the BST check
bool IsBinarySearchTree(Node *root) {
    // Start with the full range of integer values
    return IsBstUntil(root, INT_MIN, INT_MAX);
}

Node* Insert(Node *root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
} 

int main(){
  Node *root = NULL;
  root = Insert(root, 7); root = Insert(root, 4);
  root = Insert(root, 9); root = Insert(root, 1);
  root = Insert(root, 6); root = Insert(root, 3);

  if( IsBinarySearchTree(root))
   cout << "It is a Binary search tree" << endl;
  else 
   cout << "It is not a Binart search tree" << endl;
}