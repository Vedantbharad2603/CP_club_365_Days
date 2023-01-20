// 0x69Day of 0x365Days challenge
// VEDANT BHARAD
// 25-12-2022
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
string myfun(vector<int> &A) {
    double st = 0;
    double n = A.size();
    for(int i=0; i<n; i++)
        st += A[i];
    double mean = st/n;
    st=0;
    for(auto x:A)
        st += pow(x-mean,2);
        st /= n;
        st *= 100;
        st = round(st);
    string s = to_string(st/100);
    size_t p = s.find('.');
    return s.substr(0,p+3);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> vect(arr, arr + n);
    cout << myfun(vect) << endl;
    return 0;
}