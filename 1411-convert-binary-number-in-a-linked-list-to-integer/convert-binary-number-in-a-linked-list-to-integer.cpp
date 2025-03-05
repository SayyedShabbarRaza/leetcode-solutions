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
    int getDecimalValue(ListNode* head) {
        ListNode*tmp=head;
        int n=0;
        int ans=0;
        while(tmp->next!=nullptr){
            n++;
            tmp=tmp->next;
        }
        tmp=head;
        while(tmp!=nullptr){
            ans+=tmp->val*pow(2,n);
            n--;
            tmp=tmp->next;
        }
        return ans;
    }
};