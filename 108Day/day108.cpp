// 0x108Day of 0x365Days challenge
// VEDANT BHARAD
// 2-2-2023
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
	}
	return 0;
}
