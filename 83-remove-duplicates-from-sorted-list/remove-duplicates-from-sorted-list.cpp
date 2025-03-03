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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return nullptr;
        unordered_map<int,int>umap;
        ListNode*tmp=head;

        while(tmp!=nullptr){
            umap[tmp->val]++;
            tmp=tmp->next;
        }
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*prev=dummy;
        tmp=head;
        while(tmp!=nullptr){
            if(umap[tmp->val]>1){
                prev->next=tmp->next;
                umap[tmp->val]--;
            }else{
            prev=tmp;
            }
            tmp=tmp->next;
        }
        return dummy->next;
    }
};