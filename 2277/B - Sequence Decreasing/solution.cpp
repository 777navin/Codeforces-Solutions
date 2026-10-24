#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, mn = 2e9;
    cin >> n;
 
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        mn = min(mn, x);
    }
 
    cout << (mn < n ? n : 0) << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) solve();
}