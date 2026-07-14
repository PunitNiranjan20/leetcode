class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>, less<int>>q;
        for(auto stone: stones){
            q.push(stone);
        }
        while(q.size()>1){
            int first = q.top();q.pop();
            int second = q.top();q.pop();
            if(first!=second){
                first = first - second;
                q.push(first);
            }
        }
        if(q.size()==1)return q.top();
        return 0;
    }
};