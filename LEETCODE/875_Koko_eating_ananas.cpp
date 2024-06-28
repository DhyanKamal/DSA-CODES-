class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0,end=0,mid,ans;
        long sum=0;
        for(int i=0;i<piles.size();i++){
            end=max(end,piles[i]);
            sum+=piles[i];
        }
        start=sum/h;
        while(start<=end){
            mid=start+(end-start)/2;
            int hours=0;
            if(!start){
                start=1;
            }
            for(int i=0;i<piles.size();i++){
                hours+=(piles[i])/mid;
                if(piles[i]%mid)
                hours++;
            }
            if(hours<=h){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;

        }
        return ans;
    }
};