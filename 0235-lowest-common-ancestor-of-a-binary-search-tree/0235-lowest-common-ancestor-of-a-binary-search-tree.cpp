/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* temp = NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        cout<<root->val<<" ";
        if(root!=NULL && p->val<root->val && q->val>root->val || p->val>root->val && q->val<root->val) temp =  root;
        if(p->val == root->val || q->val == root->val) temp = root;
        if(p->val<root->val && q->val < root->val) lowestCommonAncestor(root->left,p,q);
        if(p->val>root->val && q->val > root->val) lowestCommonAncestor(root->right,p,q);
        return temp;
    }
};