class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int start=0,end=n-1;
        //swap 1st and last and so on.
        while(start<end){
            for(int j=0;j<n;j++){
                swap(matrix[start][j],matrix[end][j]);
            }
            start++,end--;
        }
         for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }
    }
};