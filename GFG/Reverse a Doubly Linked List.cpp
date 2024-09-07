class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode* temp=head;
        DLLNode*cc;
        while(temp){
            DLLNode* sw=temp->prev;
            temp->prev=temp->next;
            temp->next=sw;
            cc=temp;
            temp=temp->prev;
            
        }
        return cc;
    }
};