bool find4Numbers(int arr[], int n, int x)  
{
    sort(arr,arr+n);
    for(int i=0;i<n-3;i++){
        int newans=x-arr[i];
        for(int j=i+1;j<n-2;j++){
            int ans =newans-arr[j],start=j+1,end=n-1;
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    return 1;
                }
                else if(arr[start]+arr[end]>ans){
                    end--;
                }
                else
                start++;
            }
            
        }
    }
        return 0;
}