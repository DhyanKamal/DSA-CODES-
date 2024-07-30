class Solution {
public:
    int climbStairs(int n) {
       int n1=1,n2=1;
       if(n==0||n==1){
        return 1;
       }
       int x;
       for(int i=2;i<=n;i++){
         x= n1+n2;
           n1=n2;
           n2=x;
       }
       return x;
    }
};