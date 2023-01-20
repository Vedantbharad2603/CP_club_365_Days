// 0x51Day of 0x365Days challenge
// VEDANT BHARAD
// 07-12-2022
//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C++
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){

        // 1

        int index=0;
        while (index<n-k)
        {
            int temp,i=index,j=index+k-1;
            while (i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
            }
            index=index+k;
        }
        k=n%k;
        int temp,i=index,j=index+k-1;
        while (i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

        // 2

        // for(int i=0;i<n;i+=k)
        // {
        //     if(i+k<n)
        //     {
        //         reverse(arr.begin()+i,arr.begin()+i+k);
        //     }
        //     else
        //     {
        //         reverse(arr.begin()+i,arr.end());
        //     }
        // }

        // 3
        
        // for(int i=0;i<n;i+=k)
        // {
        //     int low=i;
        //     int high=min(i+k-1,n-1);
        //     while(low<high){
        //         swap(arr[low++],arr[high--]);
        //     }
        // }

    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 
        for(long long i = 0; i<n; i++){
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends