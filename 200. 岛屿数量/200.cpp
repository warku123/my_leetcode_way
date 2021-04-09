class Solution {
public:
    vector<vector<bool>> find;
    int m,n;
    void helper(vector<vector<char>>& grid,int i,int j){
        if(i<0||j<0||i>=m||j>=n){
            return;
        }
        if(grid[i][j]=='0'){
            return;
        }
        if(find[i][j]==true){
            return;
        }
        find[i][j]=true;
        helper(grid,i-1,j);
        helper(grid,i+1,j);
        helper(grid,i,j-1);
        helper(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size(),n = grid[0].size();
        int i,j;
        int res=0;
        find.resize(m);
        for(i=0;i<m;i++){
            find[i].resize(n,false);
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]=='1'&&find[i][j]==false){
                    res++;
                    helper(grid,i,j);
                }
            }
        }
        return res;
    }
};