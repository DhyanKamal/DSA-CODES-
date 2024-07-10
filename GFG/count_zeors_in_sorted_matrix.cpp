class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int n=A.size();
		int row=0,col=n-1,count=0;
		while(row<n && col>=0){
		    if(A[row][col]==0){
		        count+=(col+1);
		        row++;
		    }
		    else{
		        col--;
		    }
		}
		return count;
		
		    
		    
		}
	
};