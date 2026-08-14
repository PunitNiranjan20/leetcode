class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int>mp;
        int l = 0,r = 0;
        int maxval = 0;
        while(r<s.size()){
            mp[s[r]]++;
            if(mp[s[r]]>2){
                while(mp[s[r]]>2){
                    mp[s[l]]--;
                    if(mp[s[l]]==0)mp.erase(s[l]);
                    l++;
                }
            }
            maxval = max(maxval,r-l+1);
            r++;
        }
    return maxval;
    }
};