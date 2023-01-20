// 0x95Day of 0x365Days challenge
// VEDANT BHARAD
// 20-1-2023
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        double sum =a+b+c+(max(p-a,(max(q-b, r-c))));
        if(sum>((p+q+r)/2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}