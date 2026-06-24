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
    TreeNode* invertTree(TreeNode* root) {
        queue <TreeNode *> q;
        if(!root)return NULL;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            TreeNode * node=q.front();
            swap(node->left,node->right);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            q.pop();
        }
        return root;

        
    }
};