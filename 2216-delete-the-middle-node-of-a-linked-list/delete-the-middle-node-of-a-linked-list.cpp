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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*prev=nullptr;

        while(fast!=nullptr&&fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        // if(fast!=nullptr){
        //     prev=prev->next;
        //     slow=slow->next;
        // }
        if(head->next!=nullptr){
            prev->next=prev->next->next;
        }else{
            return nullptr;
        }

        return head;


    }
};