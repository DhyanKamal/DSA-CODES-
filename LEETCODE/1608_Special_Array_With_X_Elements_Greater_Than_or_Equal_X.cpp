class Solution {
public:
    int specialArray(vector<int>& nums) {
        int start=0,end=nums.size(),mid,c;
        while(start<=end){
            mid=start+(end-start)/2;
            c=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=mid){
                     c++;
                }
            }
            if(mid==c){
                return mid;
            }
            else if(mid<c){
                start=mid+1;
            }
            else {
                end=mid-1;
            }

        }
        return -1;

        //Brute force method
      /*  int x=0,c=0,n=nums.size();
        while(x<=n){
            c=0;
            for(int i=0;i<n;i++){
                if(nums[i]>=x){
                    c++;
                }
            }
            if(x==c){
                return x;
            }
            x++;
        }
        return -1;*/


    }
};