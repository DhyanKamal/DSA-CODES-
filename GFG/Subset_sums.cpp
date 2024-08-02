class Solution {
  public:
   void subsum(vector<int> &arr,int index,int n,int &sum,vector<int>&ans ) {
       if(index==n){
           ans.push_back(sum);
           return;
       }
       //no
        subsum(arr,index+1,n,sum,ans);
        //yes
        sum+=arr[index];
        subsum(arr,index+1,n,sum,ans);
        sum-=arr[index];
   }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        int sum=0;
        
        subsum(arr,0,n,sum,ans);
        return ans;
    }
};