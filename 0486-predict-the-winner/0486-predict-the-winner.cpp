class Solution {
public: 
    int memo[20][20];
    int backtrack(vector<int>& nums,int l,int r){
       if(l==r) return nums[l];
       if(memo[l][r] != -1) return memo[l][r];
       int pl = nums[l] - backtrack(nums,l+1,r);
       int pr = nums[r] - backtrack(nums,l,r-1);
       return memo[l][r] = max(pl,pr);
    }
    bool predictTheWinner(vector<int>& nums) {
        memset(memo,-1,sizeof(memo));
       return backtrack(nums,0,nums.size()-1) >= 0;
    }
};