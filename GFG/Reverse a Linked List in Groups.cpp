class Solution {
  public:
    struct node *reverseIt(struct node *head, int k) {
        // Complete this method
        node *first=new node(0);
        first->next=head;
        head=first;
        node *second,*prev,*front,*curr;
        while(first->next){
            second=first->next;
            prev=first;
            curr=first->next;
            int x=k;
            while(x && curr){
                front=curr->next;
                curr->next=prev;
                prev=curr;
                curr=front;
                x--;
            }
            first->next=prev;
            second->next=curr;
            first=second;
        }
        return head->next;
    }
};