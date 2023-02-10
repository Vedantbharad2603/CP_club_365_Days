// 0x116Day of 0x365Days challenge
// VEDANT BHARAD
// 10-2-2023
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;
int findOne(int arr[], int n){
    for(int loop = 0; loop < n; loop++){
        if(arr[loop] == 1){
            return loop;}
    }
}
int findN(int arr[], int n){
    for(int loop = 0; loop < n; loop++){
        if(arr[loop] == n){
            return loop;}
    }
}
int myFun(int arr[], int n){
    int con=0;
    if(arr[0]!=1){
        int index=findOne(arr,n);
        while(arr[0]!=1){
            swap(arr[index-1],arr[index]);
            index--;
            con++;}
    }
    if(arr[n-1]!=n){
        int index=findN(arr,n);
        while(arr[n-1]!=n){
            swap(arr[index],arr[index+1]);
            index++;
            con++;}
    }
    return con;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            arr[i] = temp;}
        cout<<myFun(arr, n)<<endl;
    }
    return 0;
}