#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
     TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};


class Solution {	
private:
    int findMaxPathSum(TreeNode* node, int &maxi) {
        if(node == nullptr) return 0;

        int leftSum = max(0, findMaxPathSum(node->left, maxi));
        int rightSum = max(0, findMaxPathSum(node->right, maxi));

        maxi = max(maxi, leftSum + rightSum + node->data);

        return max(leftSum, rightSum) + node->data;
    }
        
public:
    int maxPathSum(TreeNode* root) {
        //your code goes here
            int maxi = INT_MIN;
            
            findMaxPathSum(root, maxi);

            return maxi;
    }
};	