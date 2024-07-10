class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int row=0,col=m-1,ans=-1;
	    while(col>=0 && row<n){
	        if(arr[row][col]==1){
	            ans=row;
	            col--;
	        }
	        else
	          row++;
	    }
	    return ans;
	}

};