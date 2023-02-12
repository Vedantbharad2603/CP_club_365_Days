// 0x118Day of 0x365Days challenge
// VEDANT BHARAD
// 12-2-2023
#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*c==b*d || a*b==c*d || a*d==b*c)
        cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
    return 0;
}