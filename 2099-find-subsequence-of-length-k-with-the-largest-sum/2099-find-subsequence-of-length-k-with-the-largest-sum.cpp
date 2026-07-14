class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q,q1;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            q.push({nums[i],i});
        }
        while(!q.empty()){
            if(q.size()<=k){
                auto [a,b] = q.top();
                q1.push({b,a});
            }
            q.pop();
        }
        while(!q1.empty()){
            auto [a,b] = q1.top();
            q1.pop();
            arr.push_back(b);
        }
        return arr;
    }
};