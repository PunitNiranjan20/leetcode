class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(char ch : allowed){
            mp[ch]++;
        }
        int ans = 0;
        for(auto word : words){
            bool flag = true;
            for(char ch : word){
                if(mp.find(ch)==mp.end()){
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }
        return ans;
    }
};