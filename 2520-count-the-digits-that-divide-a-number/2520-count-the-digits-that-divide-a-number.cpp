class Solution {
public:
    int countDigits(int num) {
        string s=to_string(num);
        int ans=0;
        for(auto i:s){
            int k=i-'0';
            if(num%k==0)ans++;
        }
        return ans;
    }
};