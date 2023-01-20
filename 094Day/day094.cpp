// 0x94Day of 0x365Days challenge
// VEDANT BHARAD
// 19-1-2023
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        for(int loop=0;loop<n;loop++)
        {
            int temp;
            cin>>temp;
            sum+=temp;
        }
        if(sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
