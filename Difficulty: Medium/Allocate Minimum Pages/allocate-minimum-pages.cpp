class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n<k)return -1;
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        for(auto i:arr){
            high+=i;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int tempsum=0,myk=0;
            for(int it:arr){
                if(tempsum+it<=mid){
                    tempsum+=it;
                }
                else{
                   tempsum=it;
                    myk++;
                }
                if(myk>k)break;
                
            }
            if(tempsum>0)myk++;
            
            if(myk>k){
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
            
        }
        return low;
        
    }
};