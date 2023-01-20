// 0x79Day of 0x365Days challenge
// VEDANT BHARAD
// 4-1-2023
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long h,w,x,y,k;
        cin>>h>>w>>x>>y>>k;
        long temp;
        temp = ((w-x)*(w-x))+((h-y)*(h-y));
        if(sqrt(temp)<k)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}