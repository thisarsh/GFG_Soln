class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        // code here
        int cand1=nums[0],count1=0;
        for(auto it:nums){
            if(it==cand1) count1++;
            else count1--;
            if(count1==0 ) {
                cand1=it;
                count1=1;
            }
        }
     count1=0;
         for(auto it:nums){
             if(it==cand1)count1++;
         }
         if(count1>nums.size()/2)return cand1;
         return -1;
    }
};