class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int ans=0,d=0,n=arr.size(),l=0,r;
        r=n-1;
        while(l<r){
            ans=max(ans,(r-l)*min(arr[l],arr[r]));
            if(arr[l]>arr[r]){
                r--;
                
            }
            else l++;
            
        }
        return ans;
    }
};