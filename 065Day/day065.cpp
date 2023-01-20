// 0x65Day of 0x365Days challenge
// VEDANT BHARAD
// 21-12-2022
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function template for C++
class Solution{
    public:
        int MissingNumber(vector<int>& array, int n) {
            // Your code goes here
            sort(array.begin(), array.end());
            for(int loop=0; loop<array.size(); loop++)
            {
                if(array[loop]!=(loop+1))
                {
                    return loop+1;
                }
            }
            return n;
        }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends