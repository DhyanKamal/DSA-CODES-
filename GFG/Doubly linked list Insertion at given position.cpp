void addNode(Node *head, int pos, int data)
{
   // Your code here
    Node* temp=head;
    while(pos--){
        temp=temp->next;
    }
    if(temp->next==NULL){
        Node* curr=new Node(data);
        temp->next=curr;
        curr->prev=temp;
    }
    else{
        Node* curr=new Node(data);
        curr->prev=temp;
        curr->next=temp->next;
        curr->next->prev=curr;
        temp->next=curr;
    }
    
}