class Solution {
  public:
    vector<int> findMajority(vector<int>& nums) {
        // Code here
        int n=nums.size(),cand1=-1,cand2=-1,count1=0,count2=0;
        vector <int> ans;
        for(auto it:nums){
           
            if(it==cand1) count1++;
            else if(it==cand2) count2++;
           
            else if(count1==0 ){
                cand1=it;
                count1=1;
            }
            else if(count2==0){
                cand2=it;
                count2=1;
            }
             else{
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(auto it:nums){
            if(it==cand1) count1++;
            else if(it==cand2) count2++;
        }
        if(count1>n/3){
            ans.push_back(cand1);
        }
        if(count2>n/3){
            ans.push_back(cand2);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};