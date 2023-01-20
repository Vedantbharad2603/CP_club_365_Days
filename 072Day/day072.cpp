// 0x72Day of 0x365Days challenge
// VEDANT BHARAD
// 28-12-2022
#include <bits/stdc++.h>
using namespace std;
string Candies(int a,int b) {
    int c=1,toeat=1;
    while (c!=0)
    {
        if(a<0 || b<0)
        {
            c=0;
        }
        else
        {
            if(toeat%2==0) //Bob
            {
                b-=toeat;
            }
            else //Limak
            {
                a-=toeat;
            }
        }
        toeat++;
    }
    if(a>b)
        return "Limak";
    else return "Bob";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        cout<<Candies(a,b)<<endl;
    }
    return 0;
}