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
        while(head != NULL){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        //  Move: fast pointer goes to the end, and slow goes to the middle.
        //  Reverse: the right half is reversed, and slow pointer becomes the 2nd head.
        //  Compare: run the two pointers head and slow together and compare.
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL and fast->next!=NULL)
            slow = slow->next, fast=fast->next->next;
        
        if(fast != NULL)    // odd nodes : let right half be smaller
            slow = slow->next;
        
        slow = reverse(slow);
        fast = head;
        while(slow != NULL){
            if(fast->val != slow->val)
                return false;
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
};