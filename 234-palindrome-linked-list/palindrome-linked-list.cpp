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
        ListNode*newHead=new ListNode(head->val);
        ListNode*newTail=newHead;
        ListNode*tmp=head->next;

        //Duplicate
        while(tmp!=nullptr){
            newTail->next=new ListNode(tmp->val);
            newTail=newTail->next;
            tmp=tmp->next;
        }

        //Reverse
        ListNode*prev=nullptr;
        ListNode*curr=newHead;
        ListNode*front=newHead->next;

        while(curr!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=front;
            if(front!=nullptr)front=front->next;
        }

        //Palindrome
        ListNode*check=head;
        while(check!=nullptr){
            if(check->val!=prev->val)return false;
            check=check->next;
            prev=prev->next;
        }
        return true;
    }
};