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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA, *p2 = headB;
        while(1){
            // When the linked list intersects each other.
            if(p1 == p2)
                return p1;
            p1 = p1->next;
            p2 = p2->next;
            if(p1 == NULL && p2 == NULL)
                //The linked lists did not have a intersection point.
                return NULL;
            if(p1 == NULL)
                p1 = headB;
            if(p2 == NULL)
                p2 = headA;
        }
        return NULL;
    }
};