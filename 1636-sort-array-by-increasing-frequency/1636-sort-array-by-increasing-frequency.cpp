class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num : nums) mp[num]++;
        sort(nums.begin(),nums.end(),[&mp](int a,int b){
            if(mp[b]!=mp[a]) return mp[b] > mp[a];
            return b < a;
        });
        return nums;
    }
};