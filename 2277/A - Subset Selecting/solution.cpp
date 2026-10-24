#include <bits/stdc++.h>
using namespace std;
 
bool ok(int m, int k, vector<int> c) {
    for (int i = 0; i < m; i++) {
        if (!c[i]) return 0;
 
        c[i]--;
        int need = k - 1;
 
        for (int j = 0; j <= i && need; j++) {
            int x = min(c[j], need);
            c[j] -= x;
            need -= x;
        }
 
        if (need) return 0;
    }
 
    return 1;
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> c(n + 1);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        c[x]++;
    }
 
    int l = 0, r = n + 1, ans = 0;
 
    while (l <= r) {
        int m = (l + r) / 2;
 
        if (ok(m, k, c))
            ans = m, l = m + 1;
        else
            r = m - 1;
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) solve();
}