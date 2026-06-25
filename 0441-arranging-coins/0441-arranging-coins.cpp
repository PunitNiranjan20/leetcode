class Solution {
public:
    int arrangeCoins(int n) {
        int x = 0;

        for(int i = 1; i <= n; i++) {
            long long p = (1LL * i * (i + 1)) / 2;

            if(p <= n)
                x = i;
            else
                break;
        }

        return x;
    }
};