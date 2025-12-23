// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
    void f(vector <string> &ans, string s, int open, int close , int n){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        if(open<n/2 ){
            f(ans,s+'(',open+1,close,n);
        }
        
        
        if(close<open){
            f(ans,s+')',open,close+1,n);
        }
        
        
        
        
    }
  public:
    vector<string> generateParentheses(int n) {
        vector <string> ans;
        string s;
        f(ans,s,0,0,n);
        // code here
        return ans;
        
    }
};