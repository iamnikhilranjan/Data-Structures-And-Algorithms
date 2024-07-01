//To find inorder successor in BST
//01-07-2024

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

//function to find some data in the tree
Node *Find(Node *root, int data){
    if(root == NULL) return NULL;
    else if( root->data == data) return root;
    else if(root->data < data) return Find(root->right, data);
    else return Find(root->left, data);
}

//function to find Node with minimum value in BST
Node *FindMin(Node *root){
    if( root == NULL) return NULL;
    while(root->left != NULL)
       root = root->left;
    return root;
}

//function to find inorder successor in BST
Node *Getsuccessor( Node* root, int data){
  //search the node - O(h)
  Node *current = Find(root, data);
  if( current == NULL) return NULL;
  if(current->right != NULL){ //case 1 - Node has right subtree
     return FindMin(current->right); //O(h)
  }
  else{ //case 2- No right subtree - O(h)
    Node *successor = NULL;
    Node *ancestor = root;
    while( ancestor != current){
        if(current->data < ancestor->data){
            successor = ancestor;  // so far this is the deepest node for which current node is in left
            ancestor = ancestor->left;
        }
        else
           ancestor = ancestor->right;
    }
    return successor;
  }
}

//Function to visit nodes in Inorder
void Inorder(Node *root){
    if(root == NULL) return;

    Inorder(root->left); //visit left subtree
    cout<<root->data<<" ";//Print data
    Inorder(root->right);//visit right subtree
}

//function to insert node in a BST
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	            5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

	//Print Nodes in Inorder
	cout<<"Inorder Traversal: ";
	Inorder(root);
	cout<<"\n";

	// Find Inorder successor of some node. 
	struct Node* successor = Getsuccessor(root,1);
	if(successor == NULL) cout<<"No successor Found\n";
	else
    cout<<"Successor is "<<successor->data<<"\n";
}