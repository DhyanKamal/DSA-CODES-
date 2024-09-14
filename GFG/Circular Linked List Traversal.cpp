void printList(struct Node *head)
{
  // code here
  Node *temp=head->next;
  cout<<head->data<< " ";
  while(temp!=head){
      cout<<temp->data<<" ";
      temp=temp->next;
  }
}