class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        unordered_map<char,int> map,map1;
        for(char x: s) map1[x]++;
        for(char x: text){
            map[x]++;
        }
        int c = INT_MAX;
        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end()){
                c = min(c,map[s[i]]/map1[s[i]]);
            }else{
                c = 0;
            }
        }
        if(c<=0) return 0;
        return c;
    }
};