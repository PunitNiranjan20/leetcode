class Solution {
public:
    int solve(vector<vector<int>>nums,int i,int j,vector<vector<int>>&dp){
        int n = nums.size();
        int m = nums[0].size();
        if(i==n || j==m || nums[i][j]==1) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        int down = solve(nums,i+1,j,dp);
        int right = solve(nums,i,j+1,dp);
        return dp[i][j] = down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(obstacleGrid,0,0,dp);
    }
};