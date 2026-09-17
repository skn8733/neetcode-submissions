/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*,int>> st;
        st.push({root,1});
        // pair<TreeNode*,int> curr;
        int depth = 0;
        TreeNode* node;
        int output = 0;

        while(!st.empty()){
            node = st.top().first;
            depth = st.top().second;
            st.pop();
            if (node != nullptr){
                output = max(output, depth);
                st.push({node->left, depth + 1});
                st.push({node->right, depth + 1});
            }
        }
        return output;
    }
};
