class Solution {
  public:
  bool bfs(vector <int> &arr, int sum, int tsum, int i){
      if(tsum==sum){
          return 1;
      }
      if(i==arr.size() || tsum>sum )return 0;
      
      if(bfs(arr, sum, tsum+arr[i], i+1))return 1;
      if(bfs(arr, sum, tsum, i+1))return 1;
      
      return 0;
      
      
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        return bfs(arr, sum,0,0);
        
    }
};