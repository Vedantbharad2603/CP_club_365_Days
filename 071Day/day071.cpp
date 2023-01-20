// 0x71Day of 0x365Days challenge
// VEDANT BHARAD
// 27-12-2022
#include <iostream>
#include <vector>
using namespace std;
int repeatedNumber(vector<int> &A) {
    // slower method

    // for (int i = 0; i < A.size(); i++) {
    //     for (int j = i+1; j < A.size(); j++) {
    //         if (A[i] == A[j])
    //             return A[i];
    //     }
    // }
    // return -1;

    // faster one

    int n = A.size();
    vector <int> freq(n,0);
    for(int i=0;i<n;i++){
        freq[A[i]]+=1;
        if(freq[A[i]]==2){
        return A[i];
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> vect(arr, arr + n);
    cout << repeatedNumber(vect) << endl;
    return 0;
}