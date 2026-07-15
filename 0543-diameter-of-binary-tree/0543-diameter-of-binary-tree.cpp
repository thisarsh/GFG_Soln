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
    int h(TreeNode * node){
        if(!node) return 0;
        return 1+max(h(node->left),h(node->right));
    }
    void dfs (TreeNode * node, int &ans){
        ans=max(ans,h(node->left)+h(node->right));

        if(node->left) dfs(node->left,ans);
        if(node->right) dfs(node->right,ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        dfs(root,ans);
        return ans;

        
    }
};