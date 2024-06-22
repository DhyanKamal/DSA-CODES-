class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int count=0;
        while(a || b){
        if(a%2!=b%2){
            count++;
        }
        a/=2;
        b/=2;
        }
        return count;
        
    }
};