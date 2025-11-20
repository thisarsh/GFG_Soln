class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector < vector <int> > ans;
        ans.push_back({intervals[0][0],intervals[0][1]});
        for(auto &it:intervals){
         if(ans.back()[1]>=it[0] && ans.back()[1]<it[1]){
            ans.back()[1]=it[1];
         }
         else if(ans.back()[1]<it[0])
         ans.push_back({it[0],it[1]}) ;
        }
        return ans;
    }
};