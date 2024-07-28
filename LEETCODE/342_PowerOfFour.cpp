class Solution {
public:
 bool p(int n){
        if(n==4){
          return true;
        }
        if(n<4){
            return false;
        }
       if(n%4!=0){
            return false;
        }
        return p(n/4) ;
        

 }
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
         
        return p(n);
       
    }
};