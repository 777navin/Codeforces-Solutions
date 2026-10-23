#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
 
    if (n < 2 * m) {
        cout << "NO
";
        return;
    }
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    for (int i = 0; i < m; ++i) {
        if (a[i] > b[i] || a[n - m + i] < b[i]) {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}