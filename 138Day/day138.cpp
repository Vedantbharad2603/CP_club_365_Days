// 0x138Day of 0x365Days challenge
// VEDANT BHARAD
// 05-03-2023
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<'\n';
    return 0;
}