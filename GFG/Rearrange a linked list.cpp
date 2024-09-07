class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // Your Code here
        Node *head1=new Node(0),*head2=new Node(0);
        Node *tail1=head1,*tail2=head2;
        int count=1;
        while(head){
            if(count%2!=0){
               tail1->next=head;
               head=head->next;
               tail1=tail1->next;
               tail1->next=NULL;
               
            }
            else{
                tail2->next=head;
                head=head->next;
                tail2=tail2->next;
                tail2->next=NULL;
                
            }
            count++;
        }
        head1=head1->next;
        if(head2){
            head2=head2->next;
        }
        tail1->next=head2;
        head=head1;
     
        
    }
};