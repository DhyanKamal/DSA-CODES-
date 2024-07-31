//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:

      
  
    string revStr(string s) {
        // code here
        int start=0,end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++,end--;
        }
        return s;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.revStr(s) << endl;
    }
    return 0;
}

// } Driver Code Ends