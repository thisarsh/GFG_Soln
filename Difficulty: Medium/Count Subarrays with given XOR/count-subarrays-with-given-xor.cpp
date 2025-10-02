class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n=arr.size(),ans=0,cxor=0;
        unordered_map <int,int> mpp;
        mpp[0]=1;
       for(auto i:arr){
           cxor^=i;
           auto it=mpp.find(cxor^k);
           if(it!=mpp.end()){
               ans+=it->second;
           }
           mpp[cxor]++;
       }
       
       
        return ans;
    }
};