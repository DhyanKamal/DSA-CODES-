//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        vector<int> count(3,0);
        int first=0,second=0,diff=3,len=S.size();
        while(second<S.size()){
            while(diff && second<S.size()){
                if(count[S[second]-'0']==0){
                    diff--;
                }
                count[S[second]-'0']++;
                second++;
            }
            len=min(len,second-first);
            if(diff!=0 && len==S.size()){
                return -1;
            }
            
            while(diff==0){
                len=min(len,second-first);
                count[S[first]-'0']--;
                if(count[S[first]-'0']==0){
                    diff++;
                }
                first++;
            }
            
            
        }
        
        return len;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends