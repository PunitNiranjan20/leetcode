class Solution {
public:
    int smallestNumber(int n, int t) {
        int x = 1;
        for(int i=n;i<=n+t;i++){
            int j = i;
            while(j>0){
                x*= j%10;
                j/=10;
            }
            if(x%t==0) return i;
            x = 1;
        }
        return -1;
    }
};