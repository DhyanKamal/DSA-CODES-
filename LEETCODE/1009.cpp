class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int rem,mul=1,ans=0;
        while(n){
            rem=n%2;
            n/=2;
            if(rem==1){ // we can also use rem=rem^1(XOR)
                rem=0;
            }
            else{
                rem=1;
            }
            ans=rem*mul+ans;
            mul*=2;
        }
        return ans;
    }
};