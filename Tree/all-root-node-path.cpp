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
        void getAllPath(TreeNode* root, vector<int> &path, vector<vector<int>> &ans){
            if(root==nullptr) return;

            path.push_back(root->data); 

            if(root->left == nullptr && root->right == nullptr) {
                ans.push_back(path);
            }

            getAllPath(root->left, path, ans);
            getAllPath(root->right, path, ans);
            path.pop_back();
        }

	public:
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            //your code goes here
            vector<vector<int>> ans;
            vector<int> path;
            getAllPath(root, path, ans);
            return ans;
		}
};