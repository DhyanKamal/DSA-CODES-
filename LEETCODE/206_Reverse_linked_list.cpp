class Solution {
public:
   ListNode* Reverse(ListNode* curr, ListNode* prev){
          if(curr==NULL){
               return prev;
          }
          ListNode* fut=curr->next;
          curr->next=prev;
          
          return Reverse(fut,curr);
   }
    ListNode* reverseList(ListNode* head) {
        return Reverse(head,NULL);
    }
};