// 0x80Day of 0x365Days challenge
// VEDANT BHARAD
// 5-1-2023
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
    {
        int x,y,z;
        long double p,ans;
        cin >> p >> x >> y >> z;
        if(z == 1)
        {
            ans = p + (p*y)/100;
        }
        else
        {
            ans = p - (p*x)/100;
        } 
        cout << fixed << setprecision(5) << ans << endl;
	}
	return 0;
}