class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,count=0;
        for(int i:nums){
            if(i!=1){
                ans=max(count,ans);
                count=0;
            }
            else{
                count++;
            }
        }
        ans=max(ans,count);
        return ans;
    }
};