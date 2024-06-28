class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size(),mid,ans;
        int start=1,end=position[n-1]-position[0];
        while(start<=end){
            mid=start+(end-start)/2;
            int count=1,bucket=position[0];
            for(int i=1;i<n;i++){
                 if(bucket+mid<=position[i]){
                    count++;
                    bucket=position[i];
                 }

            }
            if(count<m){
              end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};