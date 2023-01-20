// 0x61Day of 0x365Days challenge
// VEDANT BHARAD
// 17-12-2022
//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C++
class Solution
{
    public:
    //Function to find the minimum indexed character.
        int minIndexChar(string str, string patt)
        {
            int minIndex=str.length(),found=0;
            for(int loop=0; loop<patt.length(); loop++)
            {
                int index = str.find(patt[loop]);
                if(index>-1) found=1;
                else found=0;
                if(found==1 && index<=minIndex)
                {
                    minIndex = index;
                }
            }
            if(minIndex==str.length()) return -1;
            return minIndex;
        }
};
//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
// } Driver Code Ends