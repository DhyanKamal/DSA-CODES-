class Solution {
public:
  void permute(vector<vector<int>> &ans,int index,vector<int>&nums){

      if(nums.size()==index){
        ans.push_back(nums);
        return;
      }
     for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        permute(ans,index+1,nums);
        swap(nums[index],nums[i]);
     }
  }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(ans,0,nums);
        return ans;
    }
};