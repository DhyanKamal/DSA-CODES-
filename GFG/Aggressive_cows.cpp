
class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start=1,end=stalls[n-1]-stalls[0],mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            int cow=1,pos=stalls[0];
            for(int i=1;i<n;i++){
            
            if(pos+mid<=stalls[i]){
                cow++;
                pos=stalls[i];
            }
                
            }
            if(cow<k){
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
