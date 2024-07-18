class Solution {
public:
    string add(string num1,string num2){
        int p1=num1.size()-1,p2=num2.size()-1,sum=0,carry=0;
        string ans;
        while(p2>=0){
          sum= (num1[p1]-'0') +(num2[p2]-'0')+carry;
          carry=sum/10;
          ans+=('0'+(sum%10));
          p2--,p1--;

        }
        while(p1>=0){
            sum= (num1[p1]-'0') +carry;
          carry=sum/10;
          ans+=('0'+(sum%10));
          p1--;
        }
        if(carry){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }    
    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size()){
            return add(num1,num2);
        }
        else
          return add(num2,num1);
    }
};