class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1);
        dp[n] = 0;
        for(int i=n-1;i>=0;i--){
            int one = dp[i+1];
            int two = (i+2)<=n ? dp[i+2]: 0;
            dp[i] = cost[i] + min(one,two);
        }
        return min(dp[0],dp[1]);
    }
};