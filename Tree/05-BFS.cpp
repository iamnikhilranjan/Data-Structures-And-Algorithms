/* Binary tree - Level Order Traversal */
#include <iostream>
#include <queue>

using namespace std;

struct BstNode{
    char data;
    BstNode *left;
    BstNode *right;
};

//function to print Nodes in a binary tree in Level order
void LevelOrder(BstNode *root){
    if(root == NULL) return;
    queue<BstNode*> Q;
    Q.push(root);
    //while there is atleast one discoverd node
    while(!Q.empty()){
       BstNode *current = Q.front();
       Q.pop(); //removing the element at front
       cout << current->data << " ";
       if( current->left != NULL)Q.push(current->left);
       if(current->right != NULL)Q.push(current->right);
    }
}

//function to insert Node in a Binary Search Tree
BstNode *Insert(BstNode *root, char data){
    if(root == NULL){
        root = new BstNode();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data) root->left = Insert(root->left,data);
    else root->right = Insert(root->right, data);
    return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	BstNode* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order. 
	LevelOrder(root);
}