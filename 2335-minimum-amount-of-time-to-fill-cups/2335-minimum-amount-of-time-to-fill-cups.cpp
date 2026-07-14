class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int, vector<int>, less<int>>q;
        for(int i=0;i<3;i++){
            if(amount[i]==0)continue;
            q.push(amount[i]);
        }
        if(q.empty())return 0;
        int i = 0;
        while(!q.empty()){
            if(q.size()==1){
                cout<<i+q.top();
            return i+q.top();
            }
            int first = q.top();q.pop();
            int second = q.top();q.pop();
            if(first-1>0){
            q.push(first-1);
            }
            if(second-1>0){
            q.push(second-1);
            }
            i++;
        }
        return i;
    }
};