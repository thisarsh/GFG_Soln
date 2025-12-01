class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string ans;
        while(n){
            if(n%2==0){
                ans+='0';
            }
            else ans+='1';
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};