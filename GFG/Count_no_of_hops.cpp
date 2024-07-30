class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        if(n==0|| n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        long n0=1,n1=1,n2=2;
        long x;
       for(int i=3;i<=n;i++){
           x = (n0+n1+n2)%1000000007;
           n0=n1;
           n1=n2;
           n2=x;
       }
       return x;
    }
};
