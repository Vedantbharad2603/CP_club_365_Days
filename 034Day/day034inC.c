// 0x34Day of 0x365Days challenge
// VEDANT BHARAD
// 20-11-2022

//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C
int howMany(char S[],char toFind)
{
    int count = 0;
    int l=strlen(S);
    for(int loop=0;loop<l;loop++)
    {
        if(S[loop]==toFind)
        {
            count++;
        }
    }
    return count;
}

char getMaxOccuringChar(char S[])
{
    int l=strlen(S);
    int max = 0;
    char maxOccuring;
    // char mychar[l];
    for(int loop=0;loop<l;loop++)
    {
        int temp=howMany(S,S[loop]);
        if(max<temp)
        {
            max=temp;
            maxOccuring=S[loop];
        }
        else if(max==temp){
            if(maxOccuring>S[loop])
            {
                max=temp;
                maxOccuring=S[loop];
            }
        }
    }
    return maxOccuring;
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
        printf("%c\n", getMaxOccuringChar(s));
    }
    return 0;
}
// } Driver Code Ends