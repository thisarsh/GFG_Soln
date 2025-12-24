class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        int l=0,r=0,sum=0;
        while(r<n){
            while(l<r && sum>target){
                sum-=arr[l];
                l++;
            }
            if(sum<target) sum+=arr[r++];
            if(sum==target) return {l+1,r};
            
            
        }
         while(l<r && sum>target){
                sum-=arr[l];
                l++;
            if(sum==target) return {l+1,r};
         }
            
            
        return {-1};
        
    }
};