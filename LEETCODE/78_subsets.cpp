class Solution {
public:
    void subset(vector<int> &nums,int index,int n,vector<int> &temp,vector<vector<int>> &ans){
         if(index==n){
            ans.push_back(temp);
            return;
         }
        // no 
        subset(nums,index+1,n,temp,ans);
        //yes
        temp.push_back(nums[index]);
        subset(nums,index+1,n,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        subset(nums,0,nums.size(),temp,ans);
        return  ans;
    }
};