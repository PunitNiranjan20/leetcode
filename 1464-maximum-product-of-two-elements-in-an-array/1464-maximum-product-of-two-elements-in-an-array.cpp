class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>, less<int>>q;
    for(auto num : nums){
        q.push(num);
    }
    int first = q.top();q.pop();
    int second = q.top();q.pop();
    return (first-1)*(second-1);
    }
};