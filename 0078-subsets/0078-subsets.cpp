class Solution {
public:
   void f(int i,vector <vector <int>> &ans, vector <int> &curr, vector <int> &nums){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        //take
        curr.push_back(nums[i]);
        f(i+1,ans,curr,nums);
        //not take
        curr.pop_back();
        f(i+1,ans,curr,nums);

   }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans;
        vector <int> curr;
        f(0,ans,curr,nums);
        return ans;
    
    }
};