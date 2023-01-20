// 0x76Day of 0x365Days challenge
// VEDANT BHARAD
// 1-1-2023
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout<<arr[1]<<endl;
    }
    return 0;
}