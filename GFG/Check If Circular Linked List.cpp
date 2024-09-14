class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head==NULL){
            return 1;
        }
        Node*temp=head->next;
        while(temp){
            if(temp==head){
                return 1;
            }
            temp=temp->next;
        }
        return 0;
    }
};