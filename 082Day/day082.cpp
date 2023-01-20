// 0x82Day of 0x365Days challenge
// VEDANT BHARAD
// 7-1-2023
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n,x;
        cin>>n>>x;
        long long price=0;
        int rain[n];
        cin>>rain[0];
        if(rain[0]==1)
            price=price+x;
        for(int loop=1;loop<n;loop++){
            cin>>rain[loop];
            if(rain[loop-1]==1 || rain[loop]==1){
                price=price+x;
            }
        }
        cout<<price<<endl;	    
	}
	return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
//         long long n,x;
//         int day,prevday;
//         cin>>n>>x;
//         long long price=0;
//         for(int loop=1;loop<=n;loop++)
//         {
//             cin>>day;
//             if((day==1||prevday==1)||(day==0&&prevday==1))
//             {
//                 price+=x;
//             }
//             prevday=day;
//         }
//         cout<<price<<endl;
// 	}
// 	return 0;
// }