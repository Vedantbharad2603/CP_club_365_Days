// 0x62Day of 0x365Days challenge
// VEDANT BHARAD
// 18-12-2022
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends
/*You are required to complete this function */
string encode(string src)
{
	// Your code here 
	string toret;
	int i=0;
	while(src[i]!='\0')
	{
		char temp= src[i];
		int loop2=i,con=0;
		while(src[loop2]==temp)
		{
			con++;
			loop2++;
		}
		toret=toret+temp;
		ostringstream str1;str1 << con;
		toret=toret+str1.str();
		i=loop2;
	}
	return toret;
}