// 0x49Day of 0x365Days challenge
// VEDANT BHARAD
// 05-12-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// Function to return Largest Number
class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        if(9*n<sum)
        {
            return "-1";
        }
        else {
            string numtoret;
            for(int loop=0;loop<n;loop++)
            {
                if(sum==0)
                {
                    numtoret+='0';
                }
                else if(sum>=9)
                {
                    numtoret+='9';
                    sum=sum-9;
                }
                else if(sum<9){
                    numtoret+=to_string(sum);
                    sum=0;
                }
            }
            return numtoret;
        }
    }
};
//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends