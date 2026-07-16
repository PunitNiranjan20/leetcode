class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        while(n>0){
            int x = n&1;
            ans+= x;
            n>>=1;
        }
        return ans;
    }
};