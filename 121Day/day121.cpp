// 0x121Day of 0x365Days challenge
// VEDANT BHARAD
// 15-2-2023
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        int required[10] = {6,2,5,5,4,5,6,3,7,6};
        int con = 0;
        while(sum!=0){
            int temp = sum%10;
            con += required[temp];
            sum /= 10;
        }
        cout<<con<<endl;
	}
	return 0;
}
