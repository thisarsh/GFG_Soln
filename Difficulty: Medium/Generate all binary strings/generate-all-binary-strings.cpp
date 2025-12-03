class Solution {
  public:
    void f(vector <string> &ans,int i, int n,string s){
        if(s==n){
            ans.push_back(s);
            return ;
        }
      f(ans,i+1,n,s+'0');
    f(ans,i+1,n,s+'1');
        
    }
    vector<string> binstr(int n) {
        vector <string> ans;
        f(ans,0,n,"");
        return ans;
        
        
    }
};