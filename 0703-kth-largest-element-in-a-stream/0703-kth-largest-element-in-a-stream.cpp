class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>q;
    vector<int>arr;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        this->k = k;
        while(q.size()>k){
            cout<<q.top()<<" ";
            q.pop();
        }
    }
    
    int add(int val) {
        if(!q.empty() && val<q.top() && q.size()==k)return q.top();
        q.push(val);
        while(q.size()>k){
            q.pop();
        }
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */