class Solution {
public:
    int gcd(long long a,long long b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        vector<long long>map;
        if(nums.size()<=1) return 0;
        int maximum = 0;
        for(int i=0;i<nums.size();i++){
            maximum = max(maximum,nums[i]);
            map.push_back(gcd(maximum,nums[i]));
        }
        long long sum = 0;
        sort(map.begin(),map.end());
        int l=0,r = map.size()-1;
        while(l<r){
            sum+=gcd(map[l],map[r]);
            l++;
            r--;
        }
        return sum;
    }
};