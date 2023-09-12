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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next ==NULL){
            return NULL;

        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(n>=count){
            return head->next;
        }
        
        temp=head;
       int i;
      for(i=0;i<count-n-1;i++){
          temp=temp->next;
      }
      temp->next=temp->next->next;
        return head;
        
    }
};

