

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
       
       vector <int> ans;
       int rmax=-1;
       for(int i=arr.size()-1; i>=0; i--){
           if(arr[i]>=rmax) ans.push_back(arr[i]);
           rmax=max(rmax,arr[i]);
       }
       reverse(ans.begin(),ans.end());
       return ans;
        
    }
};