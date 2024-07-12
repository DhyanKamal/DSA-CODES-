class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    string clockwise_rotate(string s){
        int n=s.size(),i;
        char c1=s[n-1],c2=s[n-2];
          for( i=n-3;i>=0;i--) {
              s[i+2]=s[i];
          }
          s[i+1]=c2,s[i+2]=c1;
          return s;
    }
    
    string anticlockwise_rotate(string s){
        int n=s.size(),i;
        char c=s[0],c2=s[1];
          for( i=2;i<n;i++) {
              s[i-2]=s[i];
          }
          s[i-1]=c2,s[i-2]=c;
          return s;
    }
    bool isRotated(string str1, string str2)
    {
        // Your code here
        
        if(clockwise_rotate(str1)==str2){
            return 1;
        }
        else if(anticlockwise_rotate(str1)==str2){
            return 1;
        }
        return 0;
            
        
    }

};