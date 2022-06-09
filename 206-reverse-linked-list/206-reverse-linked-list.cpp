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
    ListNode* reverseList(ListNode* head) {
        // cout <<"\nUsing recursive approach\n";

        if(head==NULL || head->next == NULL)
            return head;
        ListNode* nextNode = reverseList(head->next);
        ListNode* headNext = head->next;
        headNext->next = head;
        head->next = NULL;
        return nextNode;
        
        
        // cout <<"\nUsing iterative approach\n";

        // ListNode* prevNode=NULL;
        //     while(head!=NULL){
        //         ListNode* nextNode = head->next;
        //         head->next=prevNode;
        //         prevNode=head;
        //         head=nextNode;
        //     }
        // return prevNode;
    }
};