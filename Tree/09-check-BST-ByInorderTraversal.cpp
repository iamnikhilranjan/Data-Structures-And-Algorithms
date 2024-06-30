// Check if a binary tree is binary search tree or not
//Inorder Traversal
//an in-order traversal of a BST yields a sorted sequence of values

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

// Helper function to perform in-order traversal and check if the values are in sorted order
bool IsBSTInorder(Node *root, Node *&prev) {
    if (root == NULL) return true;

    // Check the left subtree
    if (!IsBSTInorder(root->left, prev)) return false;

    // Check the current node
    if (prev != NULL && root->data <= prev->data) return false;
    prev = root;

    // Check the right subtree
    return IsBSTInorder(root->right, prev);
}

// Wrapper function to initiate the in-order check
bool IsBinarySearchTree(Node *root) {
    Node *prev = NULL;
    return IsBSTInorder(root, prev);
}

// Function to insert a new node into the binary search tree
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

int main() {
    Node *root = NULL;

    root = Insert(root, 7);
    root = Insert(root, 4);
    root = Insert(root, 9);
    root = Insert(root, 1);
    root = Insert(root, 6);
    root = Insert(root, 3);

    if (IsBinarySearchTree(root))
        cout << "It is a Binary search tree" << endl;
    else 
        cout << "It is not a Binary search tree" << endl;

    return 0;
}
