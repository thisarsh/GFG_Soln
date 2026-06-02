class Solution {
public:
 void f(vector <int> &candidates,vector <vector <int >> &ans, int sum, int i, vector <int>
  &curr,int target){
    if(sum==target){
        ans.push_back(curr);
        return ;
    }
    if(i==candidates.size() || sum >target)return;
    
        curr.push_back(candidates[i]);
        f(candidates,ans,sum+candidates[i],i+1,curr,target);
        curr.pop_back();
        while(i<candidates.size()-1 && candidates[i]==candidates[i+1])i++;
        f(candidates,ans,sum,i+1,curr,target);

    // 112567,10



 }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> curr;
        sort(candidates.begin(),candidates.end());
        f(candidates,ans,0,0,curr,target);
        return ans;
    }
};