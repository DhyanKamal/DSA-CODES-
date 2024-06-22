int Solution::solve(int A, int B) {
    int moves=0;
    moves+=min(A-1,B-1);
    moves+=min(A-1,8-B);
    moves+=min(8-A,8-B);
    moves+=min(8-A,B-1);
    return moves;
    
    
}