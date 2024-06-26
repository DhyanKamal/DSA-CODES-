class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0,end=arr.size()-1,mid,ans=arr.size();
        while(start<=end){
            mid=end+(start-end)/2;
            if((arr[mid]-mid-1)>=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans+k;

    }
};