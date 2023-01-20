// 0x56Day of 0x365Days challenge
// VEDANT BHARAD
// 12-12-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int left=0,right=0,half=n/2;
        for(int loop=0;loop<half;loop++)
        {
            left=left+a[loop];
            right=right+a[half+loop];
        }
        return abs(right-left);
    }
};
//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends