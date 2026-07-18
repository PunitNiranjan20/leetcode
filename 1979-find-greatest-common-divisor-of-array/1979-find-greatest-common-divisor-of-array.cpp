class Solution {
public:
    int findGCD(vector<int>& nums) {
       int minele = nums[0];
       int maxele = nums[0];
       for(int i=0;i<nums.size();i++){
        minele = min(minele,nums[i]);
        maxele = max(maxele,nums[i]);
       }
       return __gcd(minele,maxele);
    }
};