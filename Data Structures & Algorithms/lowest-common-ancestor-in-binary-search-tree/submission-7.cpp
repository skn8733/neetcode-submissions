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
    // runtime is O(h) and space is O(1) 
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {  
        TreeNode* current = root;
        while(current){
            if(p->val < current->val && q->val < current->val){
                current = current->left;
            } else if(p->val > current->val && q->val > current->val){
                current = current->right;
            } else{
                return current;
            }
        }
        return nullptr;
    }
};
