// 0x111Day of 0x365Days challenge
// VEDANT BHARAD
// 5-2-2023
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int temp1=a+b;
        int temp2=b+c;
        int temp3=c+a;
        if((temp1<=d && c<=e) || (temp2<=d && a<=e) || (temp3<=d && b<=e)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
	return 0;
}
