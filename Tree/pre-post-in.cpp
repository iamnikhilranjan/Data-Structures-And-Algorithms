#include <bits/stdc++.h>
using namespace std;


 struct TreeNode {
     int data;
   TreeNode *left;
     TreeNode *right;
      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 };
 

class Solution{
	public:
		vector<vector<int> > treeTraversal(TreeNode* root){
			//your code goes here
            stack<pair<TreeNode*, int>> st;
            st.push({root, 1});
            vector<int> pre, ino, post;
            
            if(root == nullptr) return {ino, pre, post};
            while(!st.empty()) {
                auto it = st.top();
                st.pop();

                if(it.second == 1) {
                    pre.push_back(it.first->data);
                    it.second++;
                    st.push(it);

                    if(it.first->left != nullptr) {
                        st.push({it.first->left, 1});
                    }
                }

                else if((it.second == 2)){
                    ino.push_back(it.first->data);
                    it.second++;
                    st.push(it);

                    if(it.first->right != nullptr) {
                        st.push({it.first->right, 1});
                    }
                }

                else{
                    post.push_back(it.first->data);
                }
            }
            return {ino, pre, post};

		}
};