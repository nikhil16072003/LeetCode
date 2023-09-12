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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        int mid=count/2;
        if(mid==0){
            return head;
        }
        if(count==2 ||count==3){
            return temp->next;
        }
       
        int i;
        for(i=0;i<mid-2;i++){
            temp=temp->next;
        }
        temp=temp->next;
        
        return temp->next;
    }
};
