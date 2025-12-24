class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int lmax=0,rmax=0,n=arr.size();
        int l=0,r=n-1,ans=0;
        while(r<n && l<r){
            if(arr[l]<arr[r]){
                if(lmax-arr[l] > 0) ans+=lmax-arr[l] ;
                lmax=max(lmax,arr[l]);
                l++;
            }
            else{
              if(rmax-arr[r] > 0) ans+=rmax-arr[r] ;
                rmax=max(rmax,arr[r]);
                r--;
                
            }
                
            
        }
        return ans;
    }
};