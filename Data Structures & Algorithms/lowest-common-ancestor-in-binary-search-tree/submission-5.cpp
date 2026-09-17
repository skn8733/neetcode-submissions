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
    // runtime is O(h) and space is O(h)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {  
        if (!root || !p || !q){
            return nullptr;
        }
        queue<TreeNode*> myQueue;
        myQueue.push(root);
        TreeNode* temp;
        while (!myQueue.empty()){
            temp = myQueue.front();
            myQueue.pop();
            if(temp){
                if(max(p->val,q->val) < temp->val){
                    myQueue.push(temp->left);
                } else if(min(p->val,q->val) > temp->val){
                    myQueue.push(temp->right);
                } else{
                    return temp;
                }
            }
        }
        return temp; 
    }
};
