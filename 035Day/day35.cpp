// 0x35Day of 0x365Days challenge
// VEDANT BHARAD
// 21-11-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int print2largest(int arr[], int n)
    {
        sort(arr, arr + n);
        for (int loop = n - 2; loop >= 0; loop--) {
            if (arr[loop] != arr[n - 1]) {
                return arr[loop];
            }
        }
        return -1;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends