class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), tsum = 0, l = 1, r, ans = 0;
        r = n - 1;
        vector<vector <int> >answer;
        sort(nums.begin(),nums.end());
        
        for (int i = 0; i < n; i++) {
            l=i+1;
            r=n-1;

            while (l < r && r < n) {

                tsum = nums[i] + nums[l] + nums[r];
                if (tsum > 0) {
                    r--;
                } else if (tsum < 0) {
                    l++;
                } else {
                    answer.push_back({nums[i], nums[l], nums[r]});
                    l++;
                }
            }
        }
        set<vector <int>> st(answer.begin(),answer.end());
        answer.assign(st.begin(),st.end());
        return answer;
    }
};