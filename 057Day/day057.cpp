// 0x57Day of 0x365Days challenge
// VEDANT BHARAD
// 13-12-2022
//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> toret;
        int l=a[n-1];
        toret.push_back(l);
        for(int loop=n-2;loop>=0;loop--){
            if(l<=a[loop]){
                l=a[loop];
                toret.push_back(l);
            }
        }
        reverse(toret.begin(), toret.end());
        return toret;
    }
};
//{ Driver Code Starts.
int main()
{
    long long t;
    cin >> t;//testcases
    while (t--)
    {
        long long n;
        cin >> n;//total size of array
        int a[n];
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends