class Solution
{
  public:
    long long minTime(int arr[], int n, int m)
    {
        // code here
        // return minimum time
         
        long long start=0,end=0,mid,ans;
        for(int i=0;i<n;i++){
            if(start<arr[i]){
                start=arr[i];
            }
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            long long paint=0,painter=1;
            for(int i =0;i<n;i++){
                paint+=arr[i];
                if(paint>mid){
                    painter++;
                    paint=arr[i];
                }
            }
            if(painter<=m){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};