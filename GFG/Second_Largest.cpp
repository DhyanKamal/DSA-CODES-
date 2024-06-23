class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first=arr[0],second=-1;
	    for(int i=1;i<n;i++){
	        if(first<arr[i]){
	            first=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]!=first){
	            second=max(second,arr[i]);
	        }
	    }
	    return second;
	    
	    
	}
};