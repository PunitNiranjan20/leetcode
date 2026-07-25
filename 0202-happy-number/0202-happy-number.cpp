class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(mp.find(n)==mp.end()){
            int sum = 0;
            mp[n]++;
            while(n>0){
                sum += pow(n%10,2);
                n/=10;
            }
            if(sum==1) return true;
            n = sum;
            sum = 0;
        }
        return false;
    }
};