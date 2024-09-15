class Solution {
  public:
    Node* Rev(Node *curr,Node* prev){
        if(curr==NULL){
            return prev;
        }
        Node *front=curr->next;
        curr->next=prev;
        return Rev(front,curr);
    }
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1=Rev(num1,NULL);
         num2=Rev(num2,NULL);
         Node *first=num1,*second=num2;
        int carry=0,sum;
        Node *head=new Node(0);
        Node *tail=head;
        
        while(first && second){
            sum=first->data + second->data + carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            carry=sum/10;
            first=first->next;
            second=second->next;
        }
        while(first){
            sum=first->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            carry=sum/10;
            first=first->next;
        }
        while(second){
            sum=second->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            carry=sum/10;
            second=second->next;
        }
        while(carry){
            tail->next=new Node(carry%10);
            carry=carry/10;
        }
        head=Rev(head->next,NULL);
        return head;
    }
};
