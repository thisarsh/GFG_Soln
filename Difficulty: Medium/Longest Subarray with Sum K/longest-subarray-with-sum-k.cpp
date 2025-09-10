class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
int n=arr.size(),ans=0,sum=0,l=0,r=0,sum2=0;
unordered_map <int,int> mpp;
    for(int i=0; i<n; i++){
        if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
        sum+=arr[i];
}

while(r<n)
    {
    sum2+=arr[r];
    if(sum2==k){
        ans=max(ans,r+1);
    }
    else 
    {
        auto it=mpp.find(sum2-k);
        if(it!=mpp.end()){
            int index=it->second;
            ans=max(ans,r-index+1);

        }
    }
    r++;


    }
    return ans;
    }
};