class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        vector <int> hash(n,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j)continue;
                if(mat[i][j]==0){
                    hash[j]=INT_MIN;
                    // hash[i]++;
                    
                }
                else{
                    hash[j]++;
                    hash[i]=INT_MIN;
                }
            }
        }
        auto it=find(hash.begin(),hash.end(),n-1);
        if(it!=hash.end())return it-hash.begin();
        return -1;
        
    }
};