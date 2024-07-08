class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int j=0;j<n-1;j++){
            for(int i=j+1;i<n;i++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};