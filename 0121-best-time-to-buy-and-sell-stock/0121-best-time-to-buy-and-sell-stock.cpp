class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0,i=0,m=INT_MAX;
       for(auto i:nums){
            m=min(m,i);
            ans=max(ans,i-m);
       }
        return ans;

    }
};