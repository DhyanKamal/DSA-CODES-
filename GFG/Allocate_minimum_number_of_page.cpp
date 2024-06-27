
class Solution {
  public:
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(n<m){
            return -1;
        }
        long long start=0,end=0,mid,ans;
        for(int i=0;i<n;i++){
            if(start<arr[i]){
                start=arr[i];
            }
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            long long page=0,student=1;
            for(int i =0;i<n;i++){
                page+=arr[i];
                if(page>mid){
                    student++;
                    page=arr[i];
                }
            }
            if(student<=m){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
        
        
    }
};


