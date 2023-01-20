// 0x44Day of 0x365Days challenge
// VEDANT BHARAD
// 30-11-2022
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) 
    {
        vector<int> ans;

        // 1 fastest solution

        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<n;i++){
            p.push(arr[i]);
            if(p.size()>k)
                p.pop();
        }
        
        while(p.size()>0){
            ans. push_back(p.top());
            p.pop();
        }
        reverse(ans.begin(),ans.end());

        //2

        // sort(arr, arr + n);
        // int con=1;
        // ans.insert(ans.end(),arr[n-1]);
        // n=n-1;
        // while (con<k)
        // {
        //     if(arr[n]!=arr[n-1])
        //     {
        //         ans.insert(ans.end(),arr[n-1]);
        //         con++;
        //     }
        //     n--;
        // }
        return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends