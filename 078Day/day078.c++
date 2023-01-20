// 0x78Day of 0x365Days challenge
// VEDANT BHARAD
// 3-1-2023
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
            long long x;
            cin>>x;
            int temp=0;
            while(x%2==0){
                x/=2;
                temp++;
            }
            if(temp%2==0)
                cout<<"1"<<endl;
            else 
                cout<<"0"<<endl;
    }
    return 0;
}