int Solution::solve(vector<int> &A, int B) {
    if(B<0){
        B=B*-1;
    }
    sort(A.begin(),A.end());
    int start=0,n=A.size(),end=1;
    while(end<n){
        if(start==end){
            end++;
        }
        if(A[end]-A[start]==B){
            return 1;
        }
        else if(A[end]-A[start]<B){
            end++;
        }
        else{
            start++;
        }
    }
    return 0;
}
