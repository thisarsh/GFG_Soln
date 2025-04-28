class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size(),l=0,r=0,window_length=0;
        long long tsum=0,sum=0,count=0;
        for(int i=0; i<n; i++){
            window_length=i-l+1;
            tsum+=nums[i];
            while((tsum * window_length )>=k ) {

              tsum-=nums[l];
              l++;  
              window_length=i-l+1;

              
            }
            if(tsum<k){
                count+=window_length;
     
            }
           
        }
        return count;
        
    }
};