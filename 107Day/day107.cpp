// 0x107Day of 0x365Days challenge
// VEDANT BHARAD
// 1-2-2023
#include <iostream>
using namespace std;
int stairs(int n)
{
    int a=0,b=1,sum=a+b;
    for (int i = 1; i <= n; ++i)
    {
        a = b;
        b = sum;
        sum = a + b;
    }
    return b;

}
int main() {
	int t;
	cin >> t;
	while(t--) {
        int A;
        cin >> A;
        cout<<stairs(A)<<endl;
	}
	return 0;
}
