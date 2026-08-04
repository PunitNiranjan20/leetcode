class Solution {
public:
    int solve(vector<int>nums,int l,int r,vector<int>&dp){
        if(l>r) return 0;
        if(dp[l]!=-1)return dp[l];
        int take = nums[l]+ solve(nums,l+2,r,dp);
        int skip = solve(nums,l+1,r,dp);
        cout<<take<<" "<<skip<<endl;
        dp[l] = max(take,skip);
        return dp[l];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        vector<int> dp1(n+1,-1);
        int a = solve(nums,0,n-2,dp);
        int b = solve(nums,1,n-1,dp1);
        int ans = max(a,b);
        return max(ans,nums[n-1]);
    }
};