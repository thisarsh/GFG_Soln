// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int n=arr.size(),a=-1,b=-1;
        int low=0,high=n-1,mid;
        sort(arr.begin(),arr.end());
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==x){
                return {x,x};
            }
           else if(arr[mid]>x){
               a=arr[mid];
               high=mid-1;
           }
           else {
               b=arr[mid];
               low=mid+1;
           }
            
        }
        //  low=0,high=n-1;
        // while(low<=high){
        //     mid=low+(high-low)/2;
        //   if(arr[mid]<x){
        //       b=arr[mid];
        //         low=mid+1;
            
        //   }
        //   else {
        //         high=mid-1;
          
        //   }
            
        // }
        return {b,a};

}
};