class Solution {
public:
    bool isPowerOfTwo(int n) {
    int x=0;
        while(pow(2,x)<=n){
              if(pow(2,x)==n){
              return true;
              }
              x++;
        }
        return false;



    }
};

//--------------OR----------------
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return false;
       
        while(n!=1){
            if(n%2!=0){
                return false;
            }
            n/=2;
        }
        return true;
    }
};