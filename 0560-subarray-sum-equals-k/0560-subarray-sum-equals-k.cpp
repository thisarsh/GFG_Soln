class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,ans=0;
        unordered_map <int,int> mpp;
        mpp[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            auto it=mpp.find(sum-k);
            if(it!=mpp.end()){
                ans+=mpp[sum-k];
            }
                mpp[sum]++;

        }
        return ans;
    }
};