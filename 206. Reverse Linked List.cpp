class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=head;
        while(curr!=NULL){
            ListNode* next1 = curr->next;
            if(curr==head){
                curr->next=NULL;
            }
            else{
                curr->next=prev;
            }
            prev=curr;
            curr=next1;
        }
        return prev;
    }
};
