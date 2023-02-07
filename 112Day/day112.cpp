// 0x112Day of 0x365Days challenge
// VEDANT BHARAD
// 6-2-2023
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z % x == 0 && z % y != 0){
            cout<<"CHICKEN"<<endl;}
        else if(z % y == 0 && z % x != 0){
            cout<<"DUCK"<<endl;}
        else if(z % x != 0 && z % y != 0){
            cout<<"NONE"<<endl;}
        else{
            cout<<"ANY"<<endl;}
	}
	return 0;
}
