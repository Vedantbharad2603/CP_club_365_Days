// 0x48Day of 0x365Days challenge
// VEDANT BHARAD
// 04-12-2022
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        int con=0;
        sort(arr.begin(), arr.end());
        for(int index=0;index<N;index++)
        {
            if(K<arr[index])
            {
                break;
            }
            else if(K>=arr[index])
            {
                K=K-arr[index];
                con++;
            }
        }
        return con;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends