class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int num : nums1){
            mp[num]++;
        }
        vector<int>arr;
        for(int num : nums2){
            if(mp[num]){
                arr.push_back(num);
                mp[num]--;
            }
        }
        return arr;
    }
};