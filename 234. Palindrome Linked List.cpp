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
        vector<int>ans;
        vector<int>rev;
        while(head!=NULL){
            ans.push_back(head->val);
            rev.push_back(head->val);
            head=head->next;

        }
        reverse(rev.begin(),rev.end());
        int n=ans.size();
        int i;
        for(i=0;i<n;i++){
            if(rev[i]!=ans[i]){
                return false;
            }
        }
        return true;
        
    }
};
