class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid;
        
        while (start < end) {
            mid = start + (end - start) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                // If the mid element is greater than the next element, the peak must be on the left side (including mid)
                end = mid;
            } else {
                // If the mid element is less than or equal to the next element, the peak must be on the right side (excluding mid)
                start = mid + 1;
            }
        }
        
        // At the end of the loop, start == end, which is the peak element
        return start;
    }
};
