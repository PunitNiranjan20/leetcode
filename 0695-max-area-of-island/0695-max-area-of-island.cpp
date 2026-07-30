class Solution {
public:
    int ans = 0;
   
    void  dfs(vector<vector<int>>&grid,int i,int j,int &count){
        if(i<0||j<0||i>=grid.size()||j>=grid[i].size()||grid[i][j]==0){
             return;
        }
        
        grid[i][j] = 0;
       count++;
       
        cout<<ans<<" "<<count<<endl;
        dfs(grid,i+1,j,count);
       dfs(grid,i-1,j,count);
      dfs(grid,i,j+1,count);
       dfs(grid,i,j-1,count);
   
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    int count=0;
                  dfs(grid,i,j,count);
                  ans = max(ans ,count);
                    cout<<endl;
                }
            }
        }
        return ans;
    }
};