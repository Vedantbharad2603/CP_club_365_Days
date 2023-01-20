// 0x63Day of 0x365Days challenge
// VEDANT BHARAD
// 19-12-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
    public:
        int countWords(string list[], int n)
        {
            //code here.
            sort(list, list + n);
            int count = 0,loop1=0,loop2;
            while (loop1<n)
            {
                string temp= list[loop1];
                int loop2=loop1,con=0;
                while(list[loop2]==temp)
                {
                    con++;
                    loop2++;
                }
                if(con==2) count++;
                loop1=loop2;
            }
            return count;
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
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends