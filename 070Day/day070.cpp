// 0x70Day of 0x365Days challenge
// VEDANT BHARAD
// 26-12-2022
#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int a[], int n)
{
    int maxcount = 0;
    int returnvalue = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }
        if (count > maxcount) {
            maxcount = count;
            returnvalue = count;
        }
    }
    return returnvalue;
}
void ChangeIt(int a[],int n) {
    int temp=mostFrequent(a,n);
    if(n==1 || temp==n)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<n-temp<<endl;
    }
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ChangeIt(a,n);
    }
    return 0;
}