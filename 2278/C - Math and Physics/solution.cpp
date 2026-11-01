#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, mx = 0, in = 0;
    long long s = 0;
 
    cin >> n;
 
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        s += x;
        mx = max(mx, x);
 
        if (i && i < n - 1)
            in = max(in, x);
    }
 
    if (mx == 1) cout << -1;
    else if (n == 2 || in >= 2) cout << s - 1;
    else cout << s - n + 1;
 
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) solve();
}