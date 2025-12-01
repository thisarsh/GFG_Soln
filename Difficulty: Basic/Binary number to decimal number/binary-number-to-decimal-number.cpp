class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        long long ans=0;
        int n=b.size();
        reverse(b.begin(),b.end());
        for(int i=0; i<n;i++){
            if(b[i]=='1'){
                ans+=pow(2,i);
            }
        }
        return ans;
    }
};