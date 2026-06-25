class Solution {
public:
    int arrangeCoins(int n) {
       long long left =1;
       long long right = n;
       int ans =0;
       while(left <=right){
           long long mid = left +(right - left)/2;
            if(mid *(mid+1)/2 <= n){
                ans = (int)mid;
                left = mid+1;
            }else{
                right = mid-1;
            }
       }
       return ans;
    }
};