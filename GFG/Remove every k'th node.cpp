class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        Node* temp=head,*prev=NULL;
        int count=1;
        while(temp){
             if(count==k){
                 prev->next=temp->next;
                 delete temp;
                 temp=prev->next;
                 count=1;
             }else{
             prev=temp;
             temp=temp->next;
             count++;
             }
        }
        return head;
    }
};