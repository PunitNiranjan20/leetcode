class Solution {
public:
    int solve(vector<int>arr,int n,vector<int>&dp){
        if(n>=arr.size()) return 0;
        if(dp[n]!=-1) return dp[n];
        int take = arr[n] + solve(arr,n+2,dp);
        int skip = solve(arr,n+1,dp);
        dp[n] = max(take,skip);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return max(solve(nums,0,dp),solve(nums,1,dp));
    }
};