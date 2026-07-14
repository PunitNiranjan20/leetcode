class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
        for(int i=0;i<mat.size();i++){
            int sum =0;
            for(int j=0;j<mat[i].size();j++){
                sum+=mat[i][j];
            }
            q.push({sum,i});
        }
        vector<int>arr;
        for(int i=0;i<k;i++){
            auto[a,b] = q.top();
            q.pop();
            arr.push_back(b);
        }
        return arr;
    }
};