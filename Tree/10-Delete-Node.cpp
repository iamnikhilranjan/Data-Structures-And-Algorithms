//deleting a node from BST

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

//function to find minimum of a tree

Node *FindMin(Node *root){
    while(root->left != NULL) root = root->left;
    return root;
}

//function to search a delete value from tree
Node * Delete( Node *root, int data){
    if( root == NULL) return root;
    else if( data < root->data) root->left = Delete(root->left, data);
    else if(data > root->data) root->right = Delete(root->right, data);

    //it is found, ready to be deleted.
    else{
        //case1: No child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        //case 2: One child
        else if( root->left == NULL){
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        //case 3: 2 children
        else{
            struct Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

//function to visit nodes Inorder
void Inorder(Node *root){
    if(root == NULL) return;
    Inorder(root->left);       //visit left subtree
    cout << root->data << " "; //Print data
    Inorder(root->right);      //visit right subtree
}

//function to insert Node in a binary search tree
Node *Insert( Node *root, int data){
    if( root == NULL ){
        root = new Node();
        root->data = data;
        root->left =  root->right = NULL;
    }
    else if( data <= root->data)
       root->left = Insert(root->left, data);
    else 
       root->right = Insert(root->right, data);

    return root;
}

int main(){
    /*Code To Test the logic
	  Creating an example tree
	            5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
   Node *root = NULL ;
   root = Insert(root,5); root = Insert(root,10);
   root = Insert(root,3); root = Insert(root,4); 
   root = Insert(root,1); root = Insert(root,11);

   cout << "Inorder: ";
   Inorder(root);
   cout << endl;

   //Deleting node with value 5
   root = Delete(root, 5);

   //print nodes inorder
   cout << "Inorder: ";
   Inorder(root);
   cout << endl;
}