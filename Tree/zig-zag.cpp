 #include <bits/stdc++.h>
 using namespace std;
 
 struct TreeNode {
     int data;
     TreeNode *left;
     TreeNode *right;
      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 };
 

class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        //your code goes here

        vector<vector<int>> result;

        if(root == nullptr) {
            return result;
        }

        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);

        bool leftToRight = true;

        while(!nodesQueue.empty()) {
            int size = nodesQueue.size();

            vector<int> row(size);

            for(int i = 0; i < size; i++) {
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();

                int index = leftToRight ? i : (size - 1 -i);

                row[index] = node->data;

                if(node->left) {
                    nodesQueue.push(node->left);
                }
                if(node->right) {
                    nodesQueue.push(node->right);
                }
            }
             leftToRight = !leftToRight;

            result.push_back(row);
        }
        return result;
    }
};