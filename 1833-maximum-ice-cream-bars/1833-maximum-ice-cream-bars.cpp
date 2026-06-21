class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0,ans=0;
        for(auto it:costs){
            if(c+it <= coins) {
                ans++;
                c+=it;
            }
            else break;
            
        }
        return ans;
    }
};