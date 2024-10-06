class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int> st;
        vector<int> r;
        int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                count++;
                st.push(count);
                r.push_back(count);
            }
            else if(str[i]==')'){
                r.push_back(st.top());
                st.pop();
            }
            
        }
        return r;
    }
};