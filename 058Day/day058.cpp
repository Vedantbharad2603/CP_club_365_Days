// 0x58Day of 0x365Days challenge
// VEDANT BHARAD
// 14-12-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.length()==1 && str2.length()==1)
        {
            if(str1==str2) return true;
            else return false;
        }
        else{
            string rotatedleft,rotatedright;
            //1
            // rotatedleft.append(str1.substr(2,str1.length()-2));
            // rotatedleft.append(str1.substr(0,2));

            // rotatedright.append(str1.substr(str1.length()-2,2));
            // rotatedright.append(str1.substr(0,str1.length()-2));
            //

            //2
            for(int loop=2;loop<str1.length();loop++)
            {
                rotatedleft.append(1,str1[loop]);
            }
            rotatedleft.append(1,str1[0]);rotatedleft.append(1,str1[1]);
            rotatedright.append(1,str1[str1.length()-2]);rotatedright.append(1,str1[str1.length()-1]);
            for(int loop=0;loop<str1.length()-2;loop++)
            {
                rotatedright.append(1,str1[loop]);
            }
            //
            if(rotatedright==str2 || rotatedleft==str2)
            {
                return true;
            }
            else return false;
        }
    }
};
//{ Driver Code Starts.
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
// } Driver Code Ends