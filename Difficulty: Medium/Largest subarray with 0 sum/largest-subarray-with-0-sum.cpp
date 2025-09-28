class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n=arr.size(),psum=0,ans=0;
        unordered_map <int,int> mpp;
        mpp[0]=-1;
        for(int i=0; i<n; i++){
            psum+=arr[i];
            auto it=mpp.find(psum);
            if(it!=mpp.end()){
                ans=max(ans,(i-it->second));
            }
            else{
                mpp[psum]=i;
            }
            
            
        }
        return ans;
    }
};