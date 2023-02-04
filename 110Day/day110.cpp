// 0x110Day of 0x365Days challenge
// VEDANT BHARAD
// 4-2-2023
#include <iostream>
using namespace std;
void myFun(int w[],int h[],int p[],int n,int b){
    int area=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]<=b && area<(w[i]*h[i]))
        {
            area=w[i]*h[i];
        }
    }
    if(area==0)
    {
        cout<<"no tablet"<<endl;
    }else{
        cout<<area<<endl;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n,b;
        cin>>n>>b;
        int w[n],h[n],p[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>h[i]>>p[i];
        }
        myFun(w,h,p,n,b);
	}
	return 0;
}