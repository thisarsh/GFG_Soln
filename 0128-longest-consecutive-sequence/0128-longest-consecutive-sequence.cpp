class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        int ans=1;
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int len=1;
            
                while(st.find(i+1)!=st.end()){
                    len++;
                    i++;
                    ans=max(ans,len);
                }
            }
        }
        return ans;
    }
};