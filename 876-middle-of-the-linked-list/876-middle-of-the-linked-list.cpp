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
    /*

Algorithm:-

1. Using fast and slow pointer approach.
2. Here, the fast pointer will reach the end fastly.
3. The slow pointer will reach the mid element by that time.
4. Hence, we print out the mid element in this way.

*/
    
    ListNode* middleNode(ListNode* head) {
       ListNode* fast = head;
       ListNode* slow = head;
       while(fast != NULL && fast->next != NULL){
           fast = fast->next->next;
           slow = slow->next;
       }
       return slow;
    }
};