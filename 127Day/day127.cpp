// 0x127Day of 0x365Days challenge
// VEDANT BHARAD
// 21-2-2023
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int con=0;
        while(n!=0)
        {
            if(n%2!=0)
                con++;
            n=n/2;
        }
        if(con==0)
            cout<<0<<endl;
        else
            cout<<con-1<<endl;
	}
	return 0;
}
