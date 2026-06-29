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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* itr = head;
        while(itr!=NULL){
            if(itr->val != st.top()) return false;
            itr = itr->next;
            st.pop();
        }
        return true;
    }
};