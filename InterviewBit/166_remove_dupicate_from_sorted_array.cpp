int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     int i = 0;
    int j = 1;
    int n = A.size();
    while(j < n){
        if(A[i] == A[j])
            ++j;
        else{
            swap(A[i+1], A[j]);
            ++i;
            ++j;
        }
    }
    
    return i+1;
        
}