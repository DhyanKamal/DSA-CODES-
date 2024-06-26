class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1,end=num,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid==num/mid && num%mid==0){
                return true;
            }
            else if(mid>num/mid){
                end=mid-1;
                
            }
            else{
            start=mid+1;
            }
        }
        return false;
    }
};