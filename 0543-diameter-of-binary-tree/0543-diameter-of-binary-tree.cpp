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
 
  int d(TreeNode *node){
        if(!node) return 0;
        return 1+ max(d(node->left),d(node->right));

    }
    void dfs(TreeNode *node,int &ans){
        if(!node)return;
       ans=max(ans,d(node->left)+d(node->right));
       dfs(node->left,ans);
       dfs(node->right,ans);
        return;      

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        dfs(root,ans);
        return ans;
    }
};