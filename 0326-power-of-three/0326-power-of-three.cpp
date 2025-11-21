class Solution {
public:
    bool isPowerOfThree(double n) {
      if(n==3 || n==1) return true;
      else if(n==0)return false;
      return isPowerOfThree(double(n)/3);
   
    }
};