class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &nums) {
        // code here
        int m=nums.size(), n=nums[0].size();
        bool frowz=0,fcolz=0;
    for(int i=0; i<m; i++){
        if(nums[i][0]==0){
            fcolz=1;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(nums[0][i]==0){
            frowz=1;
            break;
        }
    }

      for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(nums[i][j]==0){
                nums[0][j]=0;
                nums[i][0]=0;
            }
        }
       
       } 
      for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(nums[i][0]==0 || nums[0][j]==0){
                nums[i][j]=0;
            }
        }
       } 

       if(fcolz){
            for(int i=0; i<m; i++){
                nums[i][0]=0;
            }
       }
       if(frowz){
            for(int i=0; i<n; i++){
                nums[0][i]=0;
            }
       }

}
};