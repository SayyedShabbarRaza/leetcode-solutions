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
        if(head==nullptr)return nullptr;
        ListNode*prev=nullptr;
        ListNode*curr=head;
        ListNode*front=head->next;

        while(curr!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=front;
            if(front!=nullptr)
            front=front->next;
        }
        return prev;
    }
};