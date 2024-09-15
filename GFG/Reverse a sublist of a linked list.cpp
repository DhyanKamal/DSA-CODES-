class Solution {
  public:
    Node* reverseBetween(int a, int b, Node* head) {
        // code here
        Node * first= new Node(0);
        first->next=head;
        head=first;
        int x=a;
        while(--x){
            first=first->next;
        }
        Node *second,*prev,*curr,*front;
        second=first->next;
        prev=first;
        curr=first->next;
        while(a<=b){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
            a++;
        }
        second->next=curr;
        first->next=prev;
        return head->next;     
        
    }
};