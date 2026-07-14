class Solution {
public:
    int fillCups(vector<int>& amount) {

        priority_queue<int> pq;

        for(int x : amount)
            if(x > 0)
                pq.push(x);

        int ans = 0;

        while(pq.size() >= 2){

            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();

            a--;
            b--;
            ans++;

            if(a > 0) pq.push(a);
            if(b > 0) pq.push(b);
        }

        if(!pq.empty())
            ans += pq.top();

        return ans;
    }
};