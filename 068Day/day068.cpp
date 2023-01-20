// 0x68Day of 0x365Days challenge
// VEDANT BHARAD
// 24-12-2022
#include <bits/stdc++.h>
using namespace std;
int ScaleneTriangle(int &a,int &b,int &c) {
    if((a<b && b<c)&&(c<(a+b))) 
        return 1;
    if((a==b==c==0)||(a==b==c)) 
        return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a>>b>>c;
        if(ScaleneTriangle(a,b,c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}