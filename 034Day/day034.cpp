// 0x34Day of 0x365Days challenge
// VEDANT BHARAD
// 20-11-2022
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    int howMany(string str,char tofind){
        int count=0,l=str.length();
        for(int loop=0;loop<l;loop++){
            if(str[loop]==tofind){
                count++;
            }
        }
        return count;
    }
    char getMaxOccuringChar(string str)
    {
        int l=str.length(),max=0;
        char maxOccuring;
        for(int loop=0;loop<l;loop++){
            int temp=howMany(str,str[loop]);
            if(max<temp){
                max=temp;
                maxOccuring=str[loop];
            }
            else if(max==temp){
                if(maxOccuring>str[loop]){
                    max=temp;
                    maxOccuring=str[loop];
                }
            }
        }
        return maxOccuring;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends