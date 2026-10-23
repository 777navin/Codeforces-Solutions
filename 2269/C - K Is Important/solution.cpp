#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll& x : a) cin >> x;
 
    ll ans = 0;
    if (n >= 2 * k - 1) {
        for (int i = k - 1; i <= n - k; ++i) {
            ans += a[i];
        }
        for (int i = 1; i <= k - 1; ++i) {
            ans += max(a[k - 1 - i], a[n - k + i]);
        }
    } else {
        for (int i = 1; i <= n - k + 1; ++i) {
            ans += max(a[n - k + 1 - i], a[k - 2 + i]);
        }
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}