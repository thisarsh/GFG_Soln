class Solution {
  public:
    void pushZerosToEnd(vector<int>& nums) {
        // code here
        int n=nums.size(),l=0,r=0;
        while(r<n){
               swap(nums[l],nums[r]);
            if(nums[l]!=0){
                l++;
            }
            r++;
        }
    }
};