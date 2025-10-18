class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Heremid=low+(high-low/2)
       int n=arr.size();
       int low=0,high=n-1,mid;
       if(arr[0]<=arr[n-1] )return 0;
    //   if(n==1)return 0;
       while(low<high){
           mid=low+(high-low)/2;
           if(arr[mid]<=arr[low]){
            high=mid;
           }
           else {
               low=mid;
           }
           
           
       }
       return high+1;;
    }
};
