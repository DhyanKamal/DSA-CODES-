class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n) {
        // Your code here
        for(int i=0;i<n-1;i++){
            bool count=0;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    count=1;
                }
            }
            if(count==0){
                break;
            }
            
        }
    }
};
