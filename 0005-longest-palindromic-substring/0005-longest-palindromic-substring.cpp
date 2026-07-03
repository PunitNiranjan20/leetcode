class Solution {
public:
    bool isPalindrome(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;

        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(isPalindrome(s,i,j) && j-i+1 > maxLen){
                    start = i;
                    maxLen = j-i+1;
                }
            }
        }

        return s.substr(start,maxLen);
    }
};