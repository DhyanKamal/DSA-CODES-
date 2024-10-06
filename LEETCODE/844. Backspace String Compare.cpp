class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st,st2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!st.empty()){
                 st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                 if(!st2.empty()){
                    st2.pop();
                    }
            }
            else{
                st2.push(t[i]);
            }
        }
        if(st.size()==st2.size()){
              while(!st.empty()){
                    if(st.top()==st2.top()){
                        st.pop(),st2.pop();
                    }
                    else{
                        return 0;
                    }
              }
              return 1;
        }
       return 0;
    }
};