class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        unordered_set <int> st;
        for(int i:arr){
            if(st.count(i))return 1;
            st.insert(i);
            
        }
        return 0;
    }
    
};
