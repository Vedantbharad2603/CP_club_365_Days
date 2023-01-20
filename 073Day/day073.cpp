// 0x73Day of 0x365Days challenge
// VEDANT BHARAD
// 29-12-2022
#include <bits/stdc++.h>
#include <vector>
using namespace std;
string Trio(int a[]) {
    if(a[0]==(a[1]+a[2]))
        return "YES";
    return "NO";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + 3, greater<int>());
        cout<<Trio(arr)<<endl;
    }
    return 0;
}