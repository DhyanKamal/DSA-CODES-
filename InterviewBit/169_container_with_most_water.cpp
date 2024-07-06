int Solution::maxArea(vector<int> &A) {
    //two pointer 
    int start=0,end=A.size()-1,temp=0;
    while(start<end){
        int width=abs(end-start);
        int h=min(A[start],A[end]);
        int maxi=width*h;
        temp=max(temp,maxi);
        if(A[start]<A[end]){
            start++;
        }
        else{
            end--;
        }
        
    }
    return temp;
}

