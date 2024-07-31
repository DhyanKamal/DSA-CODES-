//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int check(string &S,int start,int end){
	    
	    if(start>=end){
	        return 1;
	    }
	    if(S[start]!=S[end]){
	        return 0;
	    }
	    check(S,start+1,end-1);
	}
	int isPalindrome(string S)
	{
	    int n=S.size()-1;
	    // Your code goes here
	   return  check(S,0,n);
	    
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
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends