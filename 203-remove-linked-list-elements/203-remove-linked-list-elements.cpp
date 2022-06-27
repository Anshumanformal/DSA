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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        
        // If the node to be removed is at head, then simply increment the head by 1.
        while(head!=nullptr and head->val == val)
            head = head->next;
        
        // Create two temporary pointers.
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr!=nullptr){
            if(curr->val == val){
                prev->next = curr->next;
                curr = curr->next;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }  
};