//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    vector<int> LPS(s.size(),0);
	    int pre=0,suf=1;
	    while(suf<s.size()){
	        if(s[suf]==s[pre]){
	           LPS[suf]=pre+1;
	           suf++,pre++;
	        }
	        else{
	            if(pre==0){
	                LPS[suf]=0;
	                suf++;
	            }
	            else{
	                pre=LPS[pre-1];
	            }
	        }
	    }
	    return LPS[s.size()-1];
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends