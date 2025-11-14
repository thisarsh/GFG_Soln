// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
     string s=to_string(n);
     int sz=s.size(),ans=0,temp=n;
     while(sz--){
         ans+=pow(n%10,s.size());
         n/=10;
         
     }
     if(ans==temp) return 1;
     return 0;
    }
};