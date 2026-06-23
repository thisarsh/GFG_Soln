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
int lh(TreeNode *node){
    if(!node)return 0;
    int count=0;
    while(node){
        node=node->left;
        count++;
    }
    return count;
}
int rh(TreeNode *node){
    if(!node)return 0;
    int count=0;
    while(node){
        node=node->right;
        count++;
    }
    return count;
}

    int countNodes(TreeNode* root) {
     if(!root) return 0;
     if(lh(root)==rh(root)){
        return pow(2,rh(root))-1;
     }
     return 1+ countNodes(root->left)+countNodes(root->right);   
    }
};