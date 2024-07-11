class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner,count=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                count++;
                winner=nums[i];
            }
            else{
                if(nums[i]==winner){
                    count++;
                }
                else
                count--;
            }
        }
        return winner;
    }
};