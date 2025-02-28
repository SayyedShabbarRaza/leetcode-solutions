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
    int pairSum(ListNode* head) {
        ListNode* tmp = head;

        int n = 1;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
            n++;
        }
        tmp = head;
        int i = 0;
        while (i < (n / 2)) {
                tmp = tmp->next;
            i++;
        }
        
        
        ListNode*prev=nullptr;
        ListNode*curr=tmp;
        ListNode*front=tmp->next;

        while(curr!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=front;
            if(front!=nullptr)
            front=front->next;
        }

        tmp=head;
        int maxSum=0;
        while (prev!=nullptr) {
           if((tmp->val+prev->val)>maxSum){
            maxSum=tmp->val+prev->val;
           }
                tmp = tmp->next;
                prev = prev->next;
        }      
        return maxSum;

    }
};