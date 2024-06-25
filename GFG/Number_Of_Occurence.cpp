
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int start=0,end=n-1,first=-1,last,mid;
	    while(start<=end){
	        mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            first=mid;
	            end=mid-1;
	        }
	        else if(arr[mid]>x){
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	    }
	    if(first==-1){
	        return 0;
	    }
	    
	    start=0,end=n-1;
	    while(start<=end){
	        mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            last=mid;
	            start=mid+1;
	        }
	        else if(arr[mid]>x){
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	    }
	    return (last-first)+1;
	}
};