class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> ans;
        unordered_set <int> st (nums1.begin(), nums1.end());
        // int p1=0,p2=0, n1=nums1.size(),n2=nums2.sise();
        for(auto i: nums2){
            if(st.find(i)!=st.end() && ans.find(i)==ans.end() ) ans.insert(i);
        }
        vector <int> k(ans.begin(),ans.end());
        return k;

    }
};