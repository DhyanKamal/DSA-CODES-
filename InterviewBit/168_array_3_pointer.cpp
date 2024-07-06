int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
     int n=A.size(),m=B.size(),o=C.size(),ans=INT_MAX,temp;
       int i=0,j=0,k=0; 
    while(i<n&&j<m&&k<o){
                temp=max(abs(A[i]-B[j]),max(abs(B[j]-C[k]),abs(C[k]-A[i])));
                if(temp<ans){
                    ans=temp;
                }
                if(A[i]<=B[j]&&A[i]<=C[k]){
                    i++;
                }
                else if(B[j]<=A[i]&&B[j]<=C[k]){
                    j++;
                }
                else 
                k++;
    }
            
    return ans;
}
