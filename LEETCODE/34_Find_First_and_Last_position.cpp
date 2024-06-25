class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            int start=0,end=nums.size()-1,first=-1,last=-1,mid;
            // finding first occurence
            while(start<=end){
                mid=start+(end-start)/2;
                if(nums[mid]==target){
                    first=mid;
                    end=mid-1;
                }
                else if(nums[mid]>target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
              // finding second occurence
              start=0;
              end=nums.size()-1;
             while(start<=end){
                mid=start+(end-start)/2;
                if(nums[mid]==target){
                    last=mid;
                    start=mid+1;
                }
                else if(nums[mid]>target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }

            vector<int>arr(2);
            arr[0]=first;
            arr[1]=last;
            return  arr;
    }
};