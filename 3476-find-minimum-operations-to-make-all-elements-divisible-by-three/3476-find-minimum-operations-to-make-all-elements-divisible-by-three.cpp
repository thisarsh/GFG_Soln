class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(auto it:nums){
          if(it%3!=0)count++;
        }
        return count;
        
    }
};