class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int m=a.size(),n=b.size();
        int p1=0,p2=0;
        while(p1<m && p2<n){
            int exp=min(a[p1],b[p2]);
            if(a[p1]<b[p2])p1++;
            else p2++;
            k--;
            if(k==0)return  exp;
        }
        if(p1<m){
            while(k--){
                p1++;
            }
            return a[p1-1];
        }
        if(p2<n){
            while(k--){
                p2++;
            }
            return b[p2-1];
        }
        
        return 0;
    }
};