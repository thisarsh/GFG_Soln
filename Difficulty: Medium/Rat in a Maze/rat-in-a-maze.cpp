class Solution {
  public:
  vector <vector<int>> direction={{1,0},{0,-1},{0,1},{-1,0}};
  
  void f(vector<vector<int>>& maze,vector<string>& ans, string &s,int i,int j){
        if (i < 0 || j < 0 ||
            i >= maze.size() || j >= maze[0].size() ||
            maze[i][j] == 0 || maze[i][j] == 2) {
            return;
        }

        // 2️⃣ destination
        if (i == maze.size()-1 && j == maze[0].size()-1) {
            ans.push_back(s);
            return;
        }
      int temp=maze[i][j];
      maze[i][j]=2;
      for(int k=0; k<4; k++){
          int new_i=i+direction[k][0];
          int new_j=j+direction[k][1];
          if(k==0){
              s+='D';
          }
         else  if(k==1){
              s+='L';
          }
          else if(k==2){
              s+='R';
          }
          else if(k==3){
              s+='U';
          }
          
          f(maze,ans,s,new_i,new_j);
          s.pop_back();
          
          
      }
      maze[i][j]=temp;
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector <string> ans;
        string s="";
        f(maze,ans,s,0,0);
        return ans;
    }
};