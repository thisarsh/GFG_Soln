// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int low=0,high=n-1;
        if(arr.back()<target)return -1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<target)low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};