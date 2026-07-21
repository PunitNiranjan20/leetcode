class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]] = i;
        }
        int ans = 0;
        for(int i=0;i<t.size();i++){
            ans+= abs(mp[t[i]]-i);
        }
        return ans;
    }
};