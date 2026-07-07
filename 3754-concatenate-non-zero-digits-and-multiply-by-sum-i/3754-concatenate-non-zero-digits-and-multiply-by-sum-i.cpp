class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        int sum = 0;
        int i=0;
        while(n>0){
            int x = n%10;
            if(x==0){
                n /= 10;
                continue;
            }
            sum = pow(10,i)*x+sum;
            ans+=x;
            i++;
            n/=10;
        }
        return ans*sum;
    }
};