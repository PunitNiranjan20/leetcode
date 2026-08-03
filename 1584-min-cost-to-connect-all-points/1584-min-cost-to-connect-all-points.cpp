class Solution {
public:
    int distance(vector<int>a,vector<int>b){
        return abs(a[0]-b[0]) + abs(a[1]-b[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        pq.push({0,0});
        vector<bool>visit(points.size(),false);
        int ans = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(visit[it.second]) continue;
            visit[it.second] = true;
            ans += it.first;
            for(int i=0;i<points.size();i++){
                if(i==it.second || visit[i]) continue;
                int weight = distance(points[it.second],points[i]);
                pq.push({weight,i});
            }
        }
        return ans;
    }
};