// 0x104Day of 0x365Days challenge
// VEDANT BHARAD
// 29-1-2023
#include <iostream>
using namespace std;
int grater(int a,int b)
{
    if(a>b) return a;
    return b;
}
int maxnum(int a,int b,int c)
{
    return max(max(a, b),c);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
        int R, G, B, M;
        cin >> R >> G >> B >> M;
        long long r = 0, g = 0, b = 0, temp;
        for(int loop = 0; loop < R; loop++) {
            cin >> temp;
            r = grater(r,temp);
        }
        for(int loop = 0; loop < G; loop++) {
            cin >> temp;
            g = grater(g,temp);
        }
        for(int loop = 0; loop < B; loop++) {
            cin >> temp;
            b = grater(b,temp);
        }
        while(M--) {
            if(r > g && r > b)
                r /= 2;
            else if(g > b)
                g /= 2;
            else
                b /= 2;
        }
        cout<<maxnum(r,g,b)<<endl;
	}
	return 0;
}
