class Solution {
  public:
  void merge(vector <int> &arr,int low,int mid,int high){
      int i=low,j=mid+1;
      vector <int> temp;
      while(i<=mid && j<=high){
          if(arr[i]<=arr[j]){
              temp.push_back(arr[i++]);
          }
          else{
               temp.push_back(arr[j++]);
          }
      }
      while(i<=mid){
                temp.push_back(arr[i++]);
      }
      while(j<=high){
                temp.push_back(arr[j++]);
      }
     for(int k=0; k<temp.size(); k++){
         arr[low+k]=temp[k];
         
     }
  }
    void mergeSort(vector<int>& arr, int low, int high) {  // code here
       int mid=(low+high)/2;
       if(low==high)return ;
       mergeSort(arr,low,mid);
       mergeSort(arr,mid+1,high);
       merge(arr,low,mid,high);
        
    }
};