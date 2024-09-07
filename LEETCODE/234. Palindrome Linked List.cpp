class Solution {
public:
    ListNode* Reverse(ListNode* curr,ListNode* prev){
            if(curr==NULL){
                return prev;
            }
            ListNode* fut=curr->next;
            curr->next=prev;
            
            return Reverse(fut,curr);
    }
    bool isPalindrome(ListNode* head) {
          if (!head || !head->next) return true;  
        if (!head->next->next) return head->val == head->next->val;
        int count=0;
        ListNode* temp=head,*prev=NULL,*curr=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count/=2;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        curr=Reverse(curr,NULL);
        temp=head;
        while(temp){
            if(temp->val!=curr->val){
                return 0;
            }
            temp=temp->next;
            curr=curr->next;
        }
        return 1;


    }
};