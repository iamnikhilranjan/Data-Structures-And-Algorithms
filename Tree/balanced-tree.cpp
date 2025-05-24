#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
     int data;
     TreeNode *left;
     TreeNode *right;
      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 };

class Solution{
private:
    int findHleft(TreeNode* node) {
     if(node == nullptr) return 0;

     int lh = findHleft(node->left);
     int rh = findHleft(node->right);

     return 1 + max(lh, rh);
     
    }   
    int findHright(TreeNode* node) {
     if(node == nullptr) return 0;

     int lh = findHright(node->left);
     int rh = findHright(node->right);

     return 1 + max(lh, rh);
     
    }   
public:
    bool isBalanced(TreeNode *root){
    	//your code goes here
        if(root == nullptr) return true;

        int lh = findHleft(root->left);
        int rh = findHright(root->right);

        if(abs(lh-rh) > 1) return false;

        bool right = isBalanced(root->left);
        bool left = isBalanced(root->right);

        if(!left || !right) return false;

        return true; 
        
    }
};