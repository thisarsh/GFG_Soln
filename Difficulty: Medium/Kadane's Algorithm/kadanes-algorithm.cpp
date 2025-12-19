class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int tsum=0,sum=arr[0];
        for(auto it:arr){
            tsum+=it;
            sum=max(tsum,sum);
          if(tsum<0){
              tsum=0;
          }
          

            
        }
        return sum;
    }
};