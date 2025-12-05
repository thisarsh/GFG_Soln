class Solution {
  public:
   bool f( vector <int> &nums, int k, int sum, int i){
    if(sum==k){
        return 1;
    }
    if(i==nums.size() || sum> k)return 0;
    if(f( nums,k,sum+nums[i],i+1))return 1;
    if(f( nums,k,sum,i+1))return 1;
    return 0;

    

 }
    bool checkSubsequenceSum(int n, vector<int>& nums, int k) {
        
        return f(nums,k,0,0);
        
        
    }
};