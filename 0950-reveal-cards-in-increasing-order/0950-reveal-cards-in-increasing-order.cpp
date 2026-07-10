class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& desk) {
        sort(desk.begin(),desk.end());
        queue<int>q;
        int ind = 0;
        vector<int>ans(desk.size());
        for(int i=0;i<desk.size();i++) q.push(i);
        // while(!q.empty()){
        for(int i=0;i<desk.size();i++)
        {
            ans[q.front()] = desk[ind++];
            q.pop();
            if(!q.empty())
            {
            q.push(q.front());
            q.pop();
            }
        }
        return ans;
    }
};