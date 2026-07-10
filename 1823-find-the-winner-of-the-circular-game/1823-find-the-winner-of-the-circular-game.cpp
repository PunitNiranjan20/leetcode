class Solution {
public:
    int findTheWinner(int n, int k) {
        int x = 0;
        queue<int>q;
        for(int i=1;i<=n;i++)q.push(i);
        while(q.size()>1){
            if(x==k-1){
                q.pop();
                x = 0;
                continue;
            }
            q.push(q.front());
            q.pop();
            x++;
        }
        return q.front();
    }
};