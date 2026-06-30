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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* cnext = NULL;
        while(curr!=NULL){
            cnext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = cnext;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        ListNode* temp = head;
        int carry = 0;
        ListNode* prev = NULL;
        while(temp!=NULL){
            prev = temp;
            int x = ((temp->val*2)+carry)%10;
            carry = ((temp->val*2)+carry)/10;
            temp->val = x;
            cout<<carry<<" ";
            temp = temp->next;
        }
        if(carry!=0) prev->next = new ListNode(carry);
        head = reverse(head);
        return head;
    }
};