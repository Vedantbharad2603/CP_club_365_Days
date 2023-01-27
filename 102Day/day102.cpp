// 0x102Day of 0x365Days challenge
// VEDANT BHARAD
// 27-1-2023
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int diff=abs(n-m);
        if(diff<=k)
            cout<<"0"<<endl;
        else
            cout<<diff-k<<endl;
    }
}
