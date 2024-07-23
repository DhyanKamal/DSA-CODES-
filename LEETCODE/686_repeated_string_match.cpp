class Solution {
public:
    void lpsfind(string s,vector<int>&lps){
        int pre=0,suf=1;
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                suf++,pre++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
    }
   bool Kmp(string x,string b){
    vector<int> lps(b.size(),0);
    lpsfind(b,lps);
    int first=0,second=0;
    while(second<b.size()&& first<x.size()){
        if(x[first]==b[second]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }if(second==b.size()){
        return 1;
    }
    return 0;
   }
    int repeatedStringMatch(string a, string b) {
        int repeat=1;
        string x=a;
        while(x.size()<b.size()){
             x+=a;
              repeat++;
        }
        if(Kmp(x,b)){
            return repeat;
        }
        else if(Kmp(x+a,b)){
            return repeat+1;
        }
        return -1;
    }
};