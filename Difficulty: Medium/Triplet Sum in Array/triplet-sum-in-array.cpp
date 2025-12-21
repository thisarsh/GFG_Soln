class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0; i<n-2; i++){
                int k=n-1,j=i+1;
                while(j<k){
                   int sum=arr[i]+arr[j]+arr[k];
                    if(sum== target)return 1;
                    else if(sum<target) j++;
                    else k--;
                       
                }

        }
        return 0;
        
        
    }
};