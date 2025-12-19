class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int bp=-1,n=arr.size();
        for(int i=n-1; i>0; i--){
            if(arr[i]>arr[i-1]) {
                bp=i-1;
                break;
            }
        }
        if(bp==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=n-1 ; i>bp; i--){
            if(arr[i]>arr[bp]){
                swap(arr[bp],arr[i]);
                break;
            }
        }
        reverse(arr.begin()+bp+1, arr.end());
        
        
    }
};