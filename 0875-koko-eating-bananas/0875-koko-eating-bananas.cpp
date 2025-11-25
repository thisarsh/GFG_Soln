class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1;
        long long high=*max_element(piles.begin(),piles.end());
      
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long myh=0;

            for(auto it:piles){
            myh+=(it + mid - 1) / mid;
                if(myh>h)break;
            }

            if(myh>h){
                low=mid+1;
            }
            else{
                high=mid-1;
            }


        }
        return int(low);
    }
};