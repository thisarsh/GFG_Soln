class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        for(int i:arr){
            high+=i;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0,myk=0;
            for(int it:arr){
                if(sum+it<=mid){
                    sum+=it;
                }
                else{
                    myk++;
                    sum=it;
                    
                }
            }
            if(sum>0)myk++;
            if(myk<=k){
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
            
        }
        return low;
    }
};