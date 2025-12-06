class Solution {
  public:
    int findMin(int n) {
        // code here
        int curr=0,ans=0;
        while(n){
            if(n>=10)n-=10;
            else if(n>=5)n-=5;
            else if(n>=2)n-=2;
           else  if(n>=1)n-=1;
           ans++;
        
        }
        return ans;
    }
};