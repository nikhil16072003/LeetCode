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
    ListNode* oddEvenList(ListNode* head) {
        int i,j,k;
        vector<int>odd;
        vector<int>even;
        ListNode* temp=head;
        k=1;
        while(temp!=NULL){
            if(k%2==0){
                even.push_back(temp->val);
            }
            else{
                odd.push_back(temp->val);
            }
            temp=temp->next;
            k++;

        }
       
       int n1=even.size();
       int n2=odd.size();
       for(i=0;i<n1;i++){
           odd.push_back(even[i]);
       }
        ListNode* res=new ListNode();
        temp=res;
        for(i=0;i<odd.size();i++){
            temp->next= new ListNode(odd[i]);
            temp=temp->next;
        }
        return res->next;
    
      
        
    }
};
