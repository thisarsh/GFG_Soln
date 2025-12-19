class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int tsum=0,sum=INT_MIN;
        for(auto it:arr){
            tsum=max(it,tsum+it);
            sum=max(sum,tsum); 
            
        }
        return sum;
    }
};