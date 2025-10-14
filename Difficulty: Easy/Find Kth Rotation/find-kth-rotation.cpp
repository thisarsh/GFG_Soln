class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        auto it=max_element(arr.begin(),arr.end());
        if(it==arr.end()-1) return 0;
        return it-arr.begin()+1;
    }
};
