class Solution {
public:
    int shipWithinDays(vector<int>& weights, int m) {
         
        int start=0,end=0,mid,ans,n=weights.size();
        for(int i=0;i<n;i++){
            if(start<weights[i]){
                start=weights[i];
            }
            end+=weights[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int minweig=0,d=1;
            for(int i =0;i<n;i++){
                minweig+=weights[i];
                if(minweig>mid){
                    d++;
                    minweig=weights[i];
                }
            }
            if(d<=m){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};