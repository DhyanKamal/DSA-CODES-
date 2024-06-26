class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int start=0,end=n-1,mid,first;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==0){
                first=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return n-first;
    }
};