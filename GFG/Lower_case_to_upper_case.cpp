//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends

void upper(string &str,int index,int n){
    if(index==n){
        return;
    }
    str[index]=str[index]-'a'+'A';
    upper(str,index+1,n);
}

string to_upper(string str){
    //code
    int n=str.size();
    upper(str,0,n);
    return str;
    
}