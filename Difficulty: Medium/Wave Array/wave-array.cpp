class Solution {
  public:
    void sortInWave(vector<int>& nums) {
        // code here
        int n=nums.size();
        n/=2;
        n*=2;
        for(int i=0; i<n; i+=2){
            swap(nums[i],nums[i+1]);
            
        }
        // return nums;
    }
};