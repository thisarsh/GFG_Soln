class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int ans=0;
        for(int i=0; i<arr.size()-1; i++){
            
            if(arr[i]<arr[i+1]) ans+=arr[i+1]-arr[i];
        }
        return ans;
        
    }
};