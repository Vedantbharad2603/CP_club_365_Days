// Day 0X32 
// VEDANT BHARAD
// 18-11-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int totalnum(string s)
    {
        int con=0;
        for(int loop=0;loop<s.length();loop++)
        {
            if(s[loop]=='.')
            {
                con++;
            }
        }
        return (con+1);
    }
    string reverseWords(string S) 
    { 
        string forRET="";
        string arr[totalnum(S)];
        stringstream ss(S);
        string word;
        int index=0;
        int loop;
        while (!ss.eof()) {
            getline(ss, word, '.');
            arr[index]=word;
            index++;
        }
        for(loop=totalnum(S)-1;loop>=0;loop--)
        {
            forRET=forRET+arr[loop]+".";
        }
        forRET.pop_back();
        return forRET;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends