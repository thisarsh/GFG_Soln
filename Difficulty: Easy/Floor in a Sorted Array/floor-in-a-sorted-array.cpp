class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>x)high=mid-1;
            else low=mid+1;
        }
        return high;
    }
};
