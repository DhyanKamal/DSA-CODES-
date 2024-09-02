class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count=0;
        ListNode* temp=head,*prev=NULL,*curr=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count-n==0){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        count-=n;

        while(count--){
               prev=curr;
               curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};