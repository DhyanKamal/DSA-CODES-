class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int top=0,right=n-1,bottom=n-1,left=0,v=1;
        while(left<=right&& top<=bottom){
            for(int i=left;i<=right;i++){
                ans[top][i]=v;
                v++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=v;
                v++;
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=v;
                    v++;

                }
                bottom--;
            }
            if(bottom>=top){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=v;
                    v++;
                }
                left++;
            }

        }
        return ans;
    }
};