#include <iostream>
#include <unordered_map>
 
using namespace std;
 
using ll = long long;
 
ll next_value(ll x) {
    ll sum = 0;
    while (x > 0) {
        ll d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}
 
ll canonical(ll x) {
    for (int i = 0; i < 200; ++i) {
        x = next_value(x);
    }
    return x;
}
 
void solve() {
    int n;
    cin >> n;
 
    unordered_map<ll, ll> freq;
 
    for (int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        ++freq[canonical(x)];
    }
 
    ll ans = 0;
    for (const auto& entry : freq) {
        ll count = entry.second;
        ans += count * (count - 1) / 2;
    }
 
    cout << ans << '
';
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
 
 
 
}