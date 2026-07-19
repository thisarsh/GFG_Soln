class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int p=0;
        string ans="";
        char prev=chars[0];
        int n=chars.size();
        if(n<2)return n;
        for(int i=1; i<n; i++){
            if(prev!=chars[i]){
                chars[p++]=prev;

                if(count>1){
                    string s=to_string(count);
                    for(auto it:s){
                        chars[p++]=it;
                    }

                }
                count=1;
               
                
            }
            else count++;
             prev=chars[i];
        }
        chars[p++]=prev;

                if(count>1){
                    string s=to_string(count);
                    for(auto it:s){
                        chars[p++]=it;
                    }

                }

               
        return p;
    }
};