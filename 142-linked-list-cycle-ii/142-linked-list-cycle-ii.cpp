/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
          if(head == NULL) return NULL ;
          if(head-> next == NULL) return NULL ;
          // detect a cycle by the way 
          ListNode* slow = head , *fast = head ;
          while(fast && fast->next)
          {
            slow = slow->next ;
            fast = fast->next -> next ;

          /// there is cycle 
          if(slow == fast) {
          ListNode* temp = head ; // node where the cycle begins        
            while(temp != slow) 
            {
              slow = slow-> next ;
              temp= temp-> next ;
            }
            return temp ;  
           }
          }
          return NULL ;
    }
};