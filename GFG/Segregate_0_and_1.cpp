class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int end=arr.size()-1,start=0;
        while(start<end){
            if(arr[start]==0){
                start++;
            }
            else if(arr[end]==1){
                end--;
            }
            else {
                swap(arr[end],arr[start]);
                start++,end--;
            }
        }
        
        
    }
};