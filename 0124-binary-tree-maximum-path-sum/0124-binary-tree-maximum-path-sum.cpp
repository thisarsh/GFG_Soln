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
    int ans=INT_MIN;
    int h(TreeNode * node){
        if(!node) return 0;
        int l=max(0,h(node->left));
        int r=max(0,h(node->right));
        ans=max(node->val+r+l,ans);
        return node->val+max(r,l);

    }
    int maxPathSum(TreeNode* root) {
        h(root);
        // if(ans<0)return 0;
        return ans;
    }
};