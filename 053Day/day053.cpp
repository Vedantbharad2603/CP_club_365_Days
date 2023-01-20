// 0x53Day of 0x365Days challenge
// VEDANT BHARAD
// 09-12-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        for(int loop=0; loop<S.length(); loop++)
        {
            string temp(1, S[loop]);
            size_t firstIndex = S.find(temp);
            size_t secondIndex=0;
            secondIndex= S.find(temp, firstIndex+1);
            if(secondIndex>S.length())
            {
                return S[loop];
            }
        }
        return '$';
    }
};
//{ Driver Code Starts.
int main() {
	
	int T;
	cin >> T;
	while(T--)
	{
        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        if(ans != '$')
        {
            cout << ans;
        }
        else cout << "-1";
            cout << endl;
	}
	return 0;
}
// } Driver Code Ends