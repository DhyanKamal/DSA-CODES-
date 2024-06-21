class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rem,ans=0,n=x;
        while(n){
          rem=n%10;
          n/=10;
          if(ans>INT_MAX/10){
              return false;
          }
          ans=ans*10+rem;
        }
        if(x==ans){
            return true;
        }
        return false;
    }
};