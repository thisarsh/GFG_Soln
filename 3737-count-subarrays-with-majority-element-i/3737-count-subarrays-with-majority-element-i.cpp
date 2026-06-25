class Solution {
public:
// bool maj(unordered_map <int,int> &mpp,int target){
//     // unordered_map <int,int> mpp;
//     if(mpp.find(target)==mpp.end())return 0;
//     int n=mpp[target];
//     for(auto it:mpp){
//         if(it.first!=target && it.second>=n ) return 0;
//     }
//     return 1;



// }
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size(),ans=0;
        for(int i=0; i<n; i++){
            unordered_map <int,int> mpp; 
            for(int j=i; j<n; j++){
                mpp[nums[j]]++;
                if(mpp.find(target)==mpp.end()) continue;
                if(mpp[target]>(j-i+1)/2) ans++; 
            }

        }
        return ans;
    }
};