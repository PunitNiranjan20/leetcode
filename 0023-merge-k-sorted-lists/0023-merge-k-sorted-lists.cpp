/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int>mp;
        if(lists.size()==0) return NULL;
        for(auto x : lists){
            if(x!=NULL){
                while(x!=NULL){
                    mp[x->val]++;
                    x = x->next;
                }
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for(auto x : mp){
            for(int i=0;i<x.second;i++){
                cout<<x.first<<" ";
                temp->next = new ListNode(x.first);
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};