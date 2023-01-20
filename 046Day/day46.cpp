// 0x46Day of 0x365Days challenge
// VEDANT BHARAD
// 02-12-2022
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x, tp;
        cin >> x >> tp;
        if (tp == 0) { // if the importance is 0 then direct add the luck to ans
            ans += x;
        }
        else {
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end() );
    reverse(a.begin(), a.end() );
    for (int i = 0; i < min((int)a.size(), k); i++) {
        ans += a[i];
    }
    for (int i = k; i < a.size(); i++) {
        ans -= a[i];
    }
    cout << ans << endl;
    return 0;
}