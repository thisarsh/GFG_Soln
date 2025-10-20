class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m==1)return 1;
        if(n==1)return m;
        
        int low=1,mid,high=m;
       while(low<=high){
           mid=low+(high-low)/2;
          int temp=pow(mid,n);
           if(temp==m)return mid;
           else if(temp<m)low=mid+1;
           else high=mid-1;
           
           
       }
        return -1;
    }
};