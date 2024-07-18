class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int> lower(26,0),upper(26,0);
        for(int i=0;i<n;i++){
            if(str[i]<'a'){
                upper[str[i]-'A']++;
            }
            else{
                lower[str[i]-'a']++;
            }
        }
        string temp1,temp2;
        for(int i=0;i<26;i++){
            while(lower[i]){
                temp1+=('a'+i);
                lower[i]--;
            }
            while(upper[i]){
                temp2+=('A'+i);
                upper[i]--;
            }
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(str[i]<'a'){
                str[i]=temp2[y];
                y++;
            }
            else{
                str[i]=temp1[x];
                x++;
            }
        }
        return str;
    }
};