class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long ans=0,d=1;
        for(int i=0; i<n-1; i++){
            if(prices[i]==prices[i+1]+1){
                d++;
            }
            else{
                ans+=d*(d+1)/2;
                d=1;
            }

        }
         ans+=d*(d+1)/2;
         return ans;
        
    }
};