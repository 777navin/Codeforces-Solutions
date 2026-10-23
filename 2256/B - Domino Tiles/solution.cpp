#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
constexpr ll MOD = 998244353LL;
 
int cnt(const string &s, int st) {
 
 
    int n = (int)s.size();
 
    bool a = true;
 
    bool b = true;
 
    int p = 0;
 
    for (int i = st; i < n; i += 2, ++p) {
 
        if (s[i] == '?') continue;
 
        int v = s[i] - '0';
 
        int e0 = p % 2;
 
        int e1 = 1 - e0;
 
        if (v != e0) a = false;
 
        if (v != e1) b = false;
 
    }
    return (a ? 1 : 0) + (b ? 1 : 0);
}
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    ll we = cnt(s, 0);
    ll wo = cnt(s, 1);
 
    cout << (we * wo) % MOD << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}