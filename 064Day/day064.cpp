// 0x64Day of 0x365Days challenge
// VEDANT BHARAD
// 20-12-2022
//{ Driver Code Starts
//Initial Template for C++
// C program for implementation of Bubble sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        for(int loop1=0;loop1<n-1;loop1++)
        {
            for(int loop2=0;loop2<(n-loop1)-1;loop2++)
            {
                if(arr[loop2]>arr[loop2+1])
                {
                    arr[loop2]=arr[loop2]+arr[loop2+1];
                    arr[loop2+1]=arr[loop2]-arr[loop2+1];
                    arr[loop2]=arr[loop2]-arr[loop2+1];
                }
            }
        }
    }
};
//{ Driver Code Starts.
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        Solution ob;
        ob.bubbleSort(arr, n);
        printArray(arr, n);
    }
    return 0;;
}
// } Driver Code Ends