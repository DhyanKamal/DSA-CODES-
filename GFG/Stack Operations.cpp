class Geeks {
  public:
    // Function to insert element to stack
    void insert(stack<int>& st, int x) {
        // Your code here
        st.push(x);
    }

    // Function to pop element from stack
    void remove(stack<int>& st) {
        // Your code here
        st.pop();
        
    }

    void headOf_Stack(stack<int>& st) {
        // Print top of stack
         if(!st.empty()) 
       cout<<st.top()<<endl;
       else
       cout<<"No Elements in the stack"<<endl;
    }

    // Function to find the element in stack, print Yes,if found, else print No.
    void find(stack<int>& st, int val) {
        // Your code here
        stack<int> temp=st;
        while(!temp.empty()){
            if(temp.top()==val){
                cout<<"Yes"<<endl;
                return;
            }
            temp.pop();
        }
        cout<<"No"<<endl;
    }
};