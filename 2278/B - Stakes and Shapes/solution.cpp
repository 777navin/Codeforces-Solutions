#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x, y, z;
    cin >> x >> y >> z;
 
    int n = x + y + z;
 
    for (int r = 0; r <= n; r++) {
        for (int s = 0; s <= n - r; s++) {
            int p = n - r - s;
 
            int w = min(x, s) + min(y, p) + min(z, r);
 
            int a = x - min(x, s);
            int b = y - min(y, p);
            int c = z - min(z, r);
 
            int tr = r - min(z, r);
            int ts = s - min(x, s);
            int tp = p - min(y, p);
 
            int d = min(a, tr) + min(b, ts) + min(c, tp);
 
            if (n - w - d >= w) {
                cout << string(r, 'R') + string(s, 'S') + string(p, 'P') << '
';
                return;
            }
        }
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) solve();
}