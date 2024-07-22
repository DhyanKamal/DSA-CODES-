//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        vector<int> count(256, 0);  // To count occurrences of each character
        int first = 0, second = 0, unique = 0, len = -1;

        while (second < s.size()) {
            // Expand the window by moving `second` to the right
            if (count[s[second]] == 0) {
                unique++;
            }
            count[s[second]]++;
            second++;

            // Shrink the window by moving `first` to the right if we have more than `k` unique characters
            while (unique > k) {
                count[s[first]]--;
                if (count[s[first]] == 0) {
                    unique--;
                }
                first++;
            }

            // If the window contains exactly `k` unique characters, update the maximum length
            if (unique == k) {
                len = max(len, second - first);
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
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends