class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector <pair<double,int>> frac;
        double ans=0;
        double currwt=0;
        for(int i=0; i<val.size(); i++){
            frac.push_back({val[i]/double(wt[i]),i});
        }
        sort(frac.begin(),frac.end());
        reverse(frac.begin(),frac.end());
        for(auto it:frac){
            
            if  (currwt+wt[it.second]<=capacity){
                ans+= val[it.second];
            }
            else{
                ans+=((capacity-double(currwt))/wt[it.second])*val[it.second];
                return ans;
                
            }
            currwt+=wt[it.second];
            
            
        }
        return ans;
        
    }
};
