int Lps(string A){
    vector<int> lpsfind(A.size(),0);
    int pre=0,suf=1;
    while(suf<A.size()){
        if(A[suf]==A[pre]){
            lpsfind[suf]=pre+1;
            suf++,pre++;
        }
        else{
            if(pre==0){
                lpsfind[suf]=0;
                suf++;
            }
            else{
                pre=lpsfind[pre-1];
            }
        }
    }
    return lpsfind[A.size()-1];
}
int Solution::solve(string A) {
    string rev=A;
    int size=A.size();
    reverse(rev.begin(),rev.end());
    A=rev+"$"+A;
    return size-Lps(A);
}
