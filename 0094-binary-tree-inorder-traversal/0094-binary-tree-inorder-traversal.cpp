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
    // void dfs(vector <int> &ans, TreeNode * node){
    //     if(!node)return;
    //     dfs(ans,node->left);
    //     ans.push_back(node->val);
    //     dfs(ans,node->right);
    // }
    vector<int> inorderTraversal(TreeNode* root) {
     vector <int> ans;
     TreeNode * curr= root;
     while(curr){
        if(!curr->left){
            ans.push_back(curr->val);
            curr=curr->right;
        }
        else{
            TreeNode * p=curr->left;
            while(p->right && p->right!=curr) p=p->right;
            if(!p->right) {
                p->right=curr;
                curr=curr->left;
            }
            else{
                p->right=NULL;
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
     }   
     return ans;
    }
};