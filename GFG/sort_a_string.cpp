string sort(string s){
    //complete the function here
    vector<int> ans(26,0);
    string ss;
    for(int i=0;i<s.size();i++){
        ans[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        while(ans[i]){
            ss+=i+'a';
            ans[i]--;
        }
    }
    return ss;
}