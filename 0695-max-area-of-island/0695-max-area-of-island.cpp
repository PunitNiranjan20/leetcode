class Solution {
public:
    int ans = 0;
    int count = 0;
    void  dfs(vector<vector<int>>&grid,int i,int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[i].size()||grid[i][j]==0){
             return;
        }
        grid[i][j] = 0;
       count++;
       ans = max(count,ans);
        cout<<ans<<" "<<count<<endl;
        dfs(grid,i+1,j);
       dfs(grid,i-1,j);
      dfs(grid,i,j+1);
       dfs(grid,i,j-1);
   
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                  dfs(grid,i,j);
                  count = 0;
                    cout<<endl;
                }
            }
        }
        return ans;
    }
};