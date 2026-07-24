class Solution {
public:
    vector<vector<int>>result;
    vector<int>curr;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(0,candidates,target);
        return result;
    }
    void backtrack(int ind,vector<int> arr,int target){
        if(target==0){
            result.push_back(curr);
            return;
        }
        if(ind>=arr.size() || target<0){
            return;
        }
        curr.push_back(arr[ind]);
        backtrack(ind,arr,target-arr[ind]);
        curr.pop_back();
        backtrack(ind+1,arr,target);
    }
};