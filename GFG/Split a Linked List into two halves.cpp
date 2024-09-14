class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        pair<Node *,Node *> ans;
        Node *temp=head->next;
        int count=1;
        while(temp!=head){
            count++;
            temp=temp->next;
        }
        Node *curr;
        if(count%2==0){
            count/=2;
            while(--count){
                temp=temp->next;
            }
            curr=temp->next;
            temp->next=head;
            temp=curr;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=curr;
            
            
        }
        else{
            count/=2;
            while(count--){
                temp=temp->next;
            }
            curr=temp->next;
            temp->next=head;
            temp=curr;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=curr;
        }
        
        ans.first=head;
        ans.second=curr;
        return ans;
      
    }
};