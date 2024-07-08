class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> ans;
        int col=matrix[0].size(),row=matrix.size(),top=0;
        while(top<row){
            for(int i=0;i<col;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            if(top<row){
                for(int i=col-1;i>=0;i--){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
        }
        return ans;
        
    }
};