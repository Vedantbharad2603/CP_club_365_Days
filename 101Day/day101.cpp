// 0x101Day of 0x365Days challenge
// VEDANT BHARAD
// 26-1-2023
#include <bits/stdc++.h>
using namespace std;
int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0)
    {
        return 0;
    }
    int sum = 0;
    for(int loop=0;loop<A.size()-1;loop++) 
    {
        if(A[loop+1] > A[loop])
        {
            sum += A[loop+1]-A[loop];
        }
    }
    return sum;
}
int main()
{
    vector<int> v;
    int arr[] = {1, 2, 3};
    int N = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < N; i++)
        v.push_back(arr[i]);
    cout<<maxProfit(v);
    return 0;
}