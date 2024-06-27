class Solution {
  public:
    int splitArray(int arr[] ,int n, int K) {
        // code here
        int start=0,end=0,mid,ans;
        for(int i=0;i<n;i++){
            if(start<arr[i]){    // start=max(start,arr[i])
                start=arr[i];
            }
            end+=arr[i];
        }  
        while(start<=end){
            mid=start+(end-start)/2;
            int subarr=1,s=0;
            for(int i=0;i<n;i++){
                s+=arr[i];
                if(s>mid){
                    subarr++;
                    s=arr[i];
                }
            }
            if(subarr<=K){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};