class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int leftmin=prices[0],ans=0;
        for(auto it:prices){
            ans=max(ans,it-leftmin);
            leftmin=min(leftmin,it);
        }
        return ans;
        
    }
};
