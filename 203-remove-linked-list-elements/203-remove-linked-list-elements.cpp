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
    
    // In this question, when I mentioned !head, then leetcode produced wrong answer, but when I wrote
    // head==nullptr, then the solution was accepted.
    
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        
        // If the node to be removed is at head, then simply increment the head by 1.
        ListNode* toBeDeleted;
        while(head!=nullptr and head->val == val){
            toBeDeleted = head;
            head = head->next;
            delete toBeDeleted; // to prevent memory leak
        }
            
        
        // Create two temporary pointers.
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr!=nullptr){
            if(curr->val == val){
                toBeDeleted = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete toBeDeleted;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }  
};