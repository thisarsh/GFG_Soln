class Solution {
  public:
    int cntSubarrays(vector<int> &nums, int k) {
        // code here
        int sum=0,ans=0;
        unordered_map <int,int> mpp;
        mpp[0]=1;
        for(auto it:nums){
            sum+=it;
            auto i=mpp.find(sum-k);
            if(i!=mpp.end()){
                ans+=i->second;
            }
            mpp[sum]++;
        }
        return ans;
    }
};