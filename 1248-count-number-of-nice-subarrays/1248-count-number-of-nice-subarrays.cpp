class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int sum=0,ans=0;
        unordered_map <int,int> mpp;
        mpp[0]=1;
    for (auto &i:nums){
        if(i%2) i=1;
        else i=0;
        sum+=i;
        if(mpp.count(sum-k)){
            ans+=mpp[sum-k];
        }
        mpp[sum]++;


    }return ans; 
    }
};