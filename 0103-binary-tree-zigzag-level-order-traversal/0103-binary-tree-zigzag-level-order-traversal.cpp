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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector < int > > ans;
        int count=0;
        if(!root)return {};
        queue <TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector <int> temp;
            for(int i=0; i<n; i++){
                TreeNode * curr=q.front();
                temp.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                q.pop();
            }
            if(count%2==1) reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            count++;

        }
        return ans;
        
    }
};