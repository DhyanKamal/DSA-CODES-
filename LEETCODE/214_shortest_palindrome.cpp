class Solution {
public:
    int LPS(string s){
        vector<int>lpsfind(s.size(),0);
        int pre=0,suf=1;
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                lpsfind[suf]=pre+1;
                pre++,suf++;
            }
            else{
                if(pre==0){
                    lpsfind[suf]=0;
                    suf++;
                }
                else{
                    pre=lpsfind[pre-1];
                }
            }
        }
        return lpsfind[s.size()-1];
    }
    string shortestPalindrome(string s) {
        string rev=s,temp=s;
        int size=s.size();
        reverse(rev.begin(),rev.end());
        temp=s+"$"+rev;
       int count= size-LPS(temp),i=0;
       string s2;
       while(i<count){
           s2+=rev[i];
           i++;
       }
       return s2+s;

       


    }
};