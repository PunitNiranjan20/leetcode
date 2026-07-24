class Solution {
public:
    vector<vector<int>> arr;
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        backtrack(1,n,k,curr);
        return arr;
    }
    void backtrack(int start,int n,int k,vector<int>curr){
        if(curr.size()==k){
            arr.push_back(curr);
            return;
        }
        for(int i= start;i<=n;i++){
            curr.push_back(i);
            backtrack(i+1,n,k,curr);
            curr.erase(curr.begin()+k);
        }
    }
};