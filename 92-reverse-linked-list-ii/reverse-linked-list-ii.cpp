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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        int pos=1;
        ListNode* before = NULL;
        ListNode* t=head;
        while(t!=NULL){
            if(pos<left){
                pos++;
                before =t;
                t=t->next;
                continue;
            }
            ListNode* curr = t;
            ListNode* prev=NULL;
            int times = right-left+1;
            while(times--){
                ListNode* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr=nextNode;
            }
            t->next=curr;
            if(before){
                before->next = prev;
                return head;
            }return prev;

        }return head;
        
    }
};