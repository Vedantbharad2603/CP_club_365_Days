// 0x47Day of 0x365Days challenge
// VEDANT BHARAD
// 03-12-2022
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        long int ans=0;
        sort(a,a+n);
        sort(b, b + n, greater<int>());
        for(int loop = 0; loop < n;loop++)
        {
            ans=ans+(a[loop]*b[loop]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        int a[n], b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        Solution ob;
        cout<< ob.minValue(a, b, n) <<endl;
    }
	return 0;
}
// } Driver Code Ends