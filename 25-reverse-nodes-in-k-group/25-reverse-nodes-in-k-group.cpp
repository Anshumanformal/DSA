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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* curr = head;
        int count = 0;
        while(curr && count != k){ // find the k+1 node
            curr = curr->next;
            count++;
        }
        if(count == k){ // if k+1 node is found
            curr = reverseKGroup(curr,k); // reverse list with k+1 node as head
           // head - head-pointer to direct part, 
           // curr - head-pointer to reversed part;
            while(count-- > 0){ // reverse current k-group:
                ListNode* temp = head->next; // tmp - next head in direct part
                head->next = curr;  // preappending "direct" head to the reversed list 
                curr = head; // move head of reversed part to a new node
                head = temp; // move "direct" head to the next node in direct part
            }
            head = curr;
        }
        return head;
    }
};