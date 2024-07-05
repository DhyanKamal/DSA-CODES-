class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        vector<int>arr;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                        arr.push_back(start+1);
                        arr.push_back(end+1);
                        return arr;
            }
            else if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return arr;
    }
};