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
    int dfs(TreeNode *node){
            if (!node) return 0;
            return 1+ max(dfs(node->left), dfs(node->right));

        }
   bool c(TreeNode *node){
    if(!node) return 1;
     if ( abs (dfs (node->left) - dfs(node->right) ) >=2) return 0;
     if(c(node->left) && c(node->right) ) return 1;
     
     return 0;
   }
    bool isBalanced(TreeNode* root) {
       
        return c(root);
        
    }
};