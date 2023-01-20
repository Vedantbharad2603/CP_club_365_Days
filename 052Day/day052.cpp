// 0x51Day of 0x365Days challenge
// VEDANT BHARAD
// 07-12-2022
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};
// } Driver Code Ends
class Solution {
    public:
        int chocolates(int n, vector<int> &arr) {
            // code here
            int lit=arr[0];
            for(int loop=0;loop<n;loop++)
            {
                if(lit>=arr[loop])
                {
                    lit=arr[loop];
                }
            }
            return lit;
        }
};
//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int> arr(n);
        Array::input(arr,n);
        Solution obj;
        int res = obj.chocolates(n, arr);
        cout<<res<<endl;
    }
}
// } Driver Code Ends