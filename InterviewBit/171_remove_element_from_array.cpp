int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // TC=O(n)
    int n=A.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(A[j]!=B){
            A[i]=A[j];
            i++;
        }
    }
    A.resize(i);
    return i;
    // brute force(O(n^2))
    // for(int i=n-1;i>=0;i--){
    //     if(A[i]==B){
    //         A.erase(A.begin()+i);
    //     }
    // }
    // return A.size();
}
