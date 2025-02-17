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
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        //Middle
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast!=nullptr){
            slow=slow->next;
        }
                if(slow==nullptr)return true;
        // Reverse List
        ListNode*prev=nullptr;
        ListNode*curr=slow;
        ListNode*front=slow->next;
        while(curr!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=front;
            if(front!=nullptr)
            front=front->next;
        }
    slow=prev;
    fast=head;
    while(slow!=nullptr){
        if(fast->val!=slow->val)return false;
        fast=fast->next;
        slow=slow->next;
    }
    return true;
    }
};