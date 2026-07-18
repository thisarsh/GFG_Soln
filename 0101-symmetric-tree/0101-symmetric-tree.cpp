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
    bool h(TreeNode *n1 , TreeNode *n2){
       if(!n1 && !n2)return 1;
       if(!n1 || !n2)return 0;
       if(n1->val!=n2->val) return 0;
      
       return h(n1->left,n2->right)
        && h(n1->right,n2->left);
        // return 1;
       
      
    }

    bool isSymmetric(TreeNode* root) {
        return h(root->left,root->right);
     
    }
};