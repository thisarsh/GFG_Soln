class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int low=0,high=n-1;
        // if(arr[high]<=target)return n;
        while(low<=high){
            int mid=low+(high-low)/2;
            // if(arr[mid]==target)return mid+1;
            if(arr[mid]<=target){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};
