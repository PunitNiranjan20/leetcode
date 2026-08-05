class Solution {
public:

    int solve(vector<vector<int>>& nums,int i,int j,vector<vector<int>>&dp){
        int m = nums.size();
        int n = nums[0].size();
        if(i==m-1 && j==n-1) return nums[i][j];
        if(i>=m || j>=n) return pow(10,9);
        if(dp[i][j]!=-1) return dp[i][j];
        int down = nums[i][j] + solve(nums,i+1,j,dp);
        int right = nums[i][j] + solve(nums,i,j+1,dp);
        return dp[i][j] = min(down,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(grid,0,0,dp);
    }
};