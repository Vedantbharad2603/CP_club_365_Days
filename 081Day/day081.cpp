// 0x81Day of 0x365Days challenge
// VEDANT BHARAD
// 6-1-2023
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        long long int n,x1,x2,x3,x4,x5,x6;
        cin>>n>>x1>>x2>>x3>>x4>>x5>>x6;
        long long sum=x1+x2+x3+x4+x5+x6;
        int x=n/2;
        if(n%2==0)
            cout<<sum*x<<endl;
        else
            cout<<sum*(x+1)<<endl;
	}
	return 0;
}