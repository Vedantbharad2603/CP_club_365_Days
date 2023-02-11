// 0x117Day of 0x365Days challenge
// VEDANT BHARAD
// 11-2-2023
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n,m,k,l,r,f=0;
        cin>>n>>m>>k>>l>>r;
        vector<int> ved;
        for(int i=0;i<n;i++){
            int c,p;
            cin>>c>>p;
            for(int j=0;j<m;j++){
                if(c>k+1){
                    c=c-1;
                }
                else if(c<k-1){
                    c=c+1;
                }
                else if(c>=k-1 || c<=k+1){
                    c=k;
                }
            }
            if(c>=l and c<=r){
                ved.push_back(p);
                f=1;
            }
        }
        if(f!=0){
            sort(ved.begin(),ved.end());
            cout<<ved[0]<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
	}
	return 0;
}