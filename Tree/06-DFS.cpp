#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

//function to visit nodes in preorder (DLR)
void Preorder(Node *root){
    //base condition for recursion
    if(root == NULL) return; //base condition for recursion

    printf("%c ",root->data);
    Preorder(root->left);
    Preorder(root->right);
}

//Function to visit nodes in inorder(LDR)
void Inorder(Node *root){
    if( root == NULL)return;

    Inorder(root->left);
    printf("%c ",root->data);
    Inorder(root->right);
}

//function to visit nodes in postorder
void Postorder( Node *root){
    if( root == NULL)return ;

    Postorder(root->left);
    Postorder(root->right);
    printf("%c ",root->data);
}

// function to insert nodes in binary tree
Node *Insert(Node *root, char data){
    if( root==NULL ){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
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
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
   Node *root = NULL;
   root = Insert(root, 'M'); root = Insert(root, 'B');
   root = Insert(root, 'Q'); root = Insert(root, 'Z');
   root = Insert(root, 'A'); root = Insert(root, 'C');
   //Print Nodes in Preorder
   cout <<"Preorder: ";
   Preorder(root);
   cout << endl;
   
   //Print Nodes in Inorder
   cout << "Inorder: ";
   Inorder(root);
   cout << endl;

   //Print Nodes in Postorder
   cout<< "Postorder: ";
   Postorder(root);
   cout<<endl;
}