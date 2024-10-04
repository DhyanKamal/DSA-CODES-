class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode *temp= new StackNode(x);
        temp->next=top;
        top=temp;
    }

    int pop() {
        // code here
        if(top==NULL){
            return -1;
        }
        StackNode *temp=top;
        top=top->next;
        int x=temp->data;
        delete temp;
        return x;
    }

    MyStack() { top = NULL; }
};