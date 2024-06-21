class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        // since formula is 1*1 +2*2 +3*3 +4*4 ..... + n*n
        // this is the formula of sum of square of first n natural numbers.
        // sum=n(n+1)(2n+1)/6
        return (N*(N+1)*(2*N+1))/6;
    }
};