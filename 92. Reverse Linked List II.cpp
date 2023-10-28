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
        if(!head or !head->next)
               return head;
     ListNode* newlist=new ListNode();
     ListNode* temp2=newlist;
      vector<int>part2;
      vector<int>full;
      ListNode* temp=head;
      full.push_back(0);
      while(temp!=NULL){
          full.push_back(temp->val);
          temp=temp->next;
      }
     
      for(int i=left;i<=right;i++){
          part2.push_back(full[i]);
      }
      reverse(part2.begin(),part2.end());
      int j=0;
      for(int i=left;i<=right;i++){
          full[i]=part2[j];
          j++;
      }
      for(int i=1;i<full.size();i++){
          ListNode* node=new ListNode(full[i]);
          temp2->next=node;
          temp2=temp2->next;
      }
      return newlist->next;
    }
};
