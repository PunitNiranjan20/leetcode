class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       unordered_map<int,int>mp;
        int mine = INT_MAX;
        int maxe = INT_MIN;
        for(int num : nums){
            mp[num]++;
            mine = min(mine,num);
            maxe = max(maxe,num);
        }
        vector<int> result;
        for(int i= mine;i<maxe;i++){
            if(mp.find(i)==mp.end())
            result.push_back(i);
        }
        return result;
    }
};