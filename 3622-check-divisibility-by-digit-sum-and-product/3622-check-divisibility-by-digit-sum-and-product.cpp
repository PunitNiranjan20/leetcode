class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0,product = 1;
        while(m>0){
            sum+=m%10;
            product*=m%10;
            m/=10;
        }
        return n % (sum+product) == 0;
    }
};