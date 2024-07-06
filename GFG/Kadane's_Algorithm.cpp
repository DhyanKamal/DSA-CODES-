class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long maxi=INT_MIN,prefix=0;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            maxi=max(maxi,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxi;
    }
};