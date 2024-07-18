class Solution {
public:
    string sortVowels(string s) {
        vector<int> lower(26,0),upper(26,0);
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                  lower[s[i]-'a']++;
                  s[i]='#';
            }
            else if(s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                  upper[s[i]-'A']++;
                  s[i]='#';
            }
        }
        
        for(int i=0;i<26;i++){
            int x=upper[i];
            while(x){
                temp+=('A'+i);
                x--;
            }
        }
        for(int i=0;i<26;i++){
            int x=lower[i];
            while(x){
                temp+=('a'+i);
                x--;
            }
        }
        int i=0,j=0;
        while(j<temp.size()){
            if(s[i]=='#'){
                  s[i]=temp[j];
                  j++;
            }
            i++;
        }
        return s;

    }
};