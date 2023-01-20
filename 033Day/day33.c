// 0x33Day of 0x365Days challenge
// VEDANT BHARAD
// 19-11-2022

// in C

//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C

int isPalindrome(char S[])
{
    int con=1,l=strlen(S);
    for(int loop=0;loop<l/2;loop++)
    {
        if(S[loop]!=S[(l-loop)-1])
        {
            con=0;
        }
    }
    return con;
}

//{ Driver Code Starts.

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100000];
        scanf("%s", s);
        printf("%d\n", isPalindrome(s));
    }
    return 0;
}
// } Driver Code Ends



// in C++


//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// // } Driver Code Ends
// //User function template for C++
// class Solution{
// public:
// 	int isPalindrome(string S)
// 	{
//         int con=1;
//         for(int loop=0;loop<S.length()/2;loop++)
//         {
//             if(S[loop]!=S[(S.length()-loop)-1])
//             {
//                 con=0;
//             }
//         }
//         return con;
// 	}
// };

// //{ Driver Code Starts.

// int main() 
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         Solution ob;
//         cout << ob.isPalindrome(s) << "\n";
//     }
//     return 0;
// }
// // } Driver Code Ends