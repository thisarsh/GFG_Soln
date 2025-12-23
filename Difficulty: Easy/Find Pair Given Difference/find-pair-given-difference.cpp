
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int n=arr.size();
        int l=0,r=1;
        sort(arr.begin(),arr.end());
        while(l<r && r<n){
           int diff=arr[r]-arr[l];
           if(l!=r && diff==x) return 1;
           else if(diff<x) r++;
           else l++;
           if(l==r && r<n) r++;
            
        }
        return 0;
    }
};
