class Solution {
public:
    int solve(vector<int>arr,int n,vector<int>&dp){
        if(n>=arr.size()){
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
       return dp[n] = arr[n]+min(solve(arr,n+1,dp),solve(arr,n+2,dp));   
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        cout<<dp[0]<<" ";
        return min(solve(cost,0,dp),solve(cost,1,dp));
    }
};