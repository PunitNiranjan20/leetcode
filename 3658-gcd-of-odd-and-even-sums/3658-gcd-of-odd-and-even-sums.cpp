class Solution {
public:
    int gcd(int a,int b){
        int i = min(a,b);
        if(a%i==0 && b%i==0) return i;
        int ans = 1;
        for(int j = 2;j<=i/2;j++){
            if(a%j==0 && b%j==0) ans = j;
        }
        return ans;
    }
    int gcdOfOddEvenSums(int n) {
        int even=0, odd = 0;
        for(int i=1;i<=n*2;i++){
            if(i%2==0) even+=i;
            else odd+=i;
        }
        return gcd(even,odd);
    }
};