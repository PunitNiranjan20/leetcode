class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=1)return n;
        long long sum =0;
        int ans = 0;
        for(int i=1;i<n;i++){
            sum+=i;
            if(sum<=n){
                ans = i;
            }else{
                break;
            }
        }
        return ans;
    }
};