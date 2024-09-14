class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        Node *temp=head1,*temp2=head2;
        int count1=0,count2=0;
        while(temp){
            count1++;
            temp=temp->next;
        }
        while(temp2){
            count2++;
            temp2=temp2->next;
        }
        temp=head1,temp2=head2;
        while(count1>count2){
            temp=temp->next;
            count1--;
        }
         while(count2>count1){
            temp2=temp2->next;
            count2--;
        }
        while(temp!=temp2){
            temp=temp->next;
            temp2=temp2->next;
        }
        if(temp==NULL){
            return -1;
        }
        return temp->data;
    }
};