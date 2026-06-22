class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int s=text.size(),ans=INT_MAX;
        bool b=0;
        bool a=0;
        bool l=0;
        bool o=0;
        bool n=0;
        unordered_map <char,float> mpp;
        for(auto it:text){
            if (it=='l'|| it=='o') mpp[it]+=0.5;
            else if (it=='b'|| it=='a'|| it=='n') mpp[it]++;
        }
        for(auto it:mpp){
            if(it.first=='b') b=1;
            if(it.first=='a') a=1;
            if(it.first=='l') l=1;
            if(it.first=='o') o=1;
            if(it.first=='n') n=1;
            ans=min(ans,int(it.second));
        }
        if(b && a && l && o && n) 
        return ans;
        return 0;

        

    }
};