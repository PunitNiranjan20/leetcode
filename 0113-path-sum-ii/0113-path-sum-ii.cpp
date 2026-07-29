/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>result;
    void backtrack(TreeNode* root, int target,vector<int>arr){
        if(root==NULL) return ;
        arr.push_back(root->val);
        if(!root->left && !root->right && target-root->val == 0) result.push_back(arr);
        backtrack(root->left,target-root->val,arr);
        backtrack(root->right,target-root->val,arr);
        arr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        backtrack(root,targetSum,{});
        return result;
    }
};