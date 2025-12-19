class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector <vector <int> >ans;
        
        for(int i=1; i<=n; i++){
            vector <int> temp(i,1);
            ans.push_back(temp);
        }
        for(int i=2;i<n; i++){
            for(int j=1; j<i; j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                   
            }
        }
        return ans[n-1];
        
    }
};
