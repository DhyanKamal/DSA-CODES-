class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* curr=head->next;
        Node* prev=head;
        while(curr){
            if(curr->data==prev->data){
                curr=curr->next;
            }
            else{
                prev->next=curr;
                prev=curr;
                curr=curr->next;
                
            }
        }
        prev->next=NULL;
        return head;
    }
};