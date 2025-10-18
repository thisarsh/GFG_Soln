class Solution {
public:
    bool search(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0,high=n-1,mid;
       while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]==target)return 1;
        else if(nums[high]==nums[low] && nums[low]==nums[mid]){
            high--;
            low++;
            continue;
        }
      else if(nums[low]<=nums[mid]){
            if(target<nums[mid] && target>=nums[low]){
                high=mid-1;
                
            }
            else low=mid+1;
        }
        else{
            if(target>nums[mid] && target<=nums[high]){
                low=mid+1;
            }
            else high=mid-1;
        }

       }
       return 0;
      
    }
};