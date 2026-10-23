#include <bits/stdc++.h>
using namespace std;
 
static string build(int zc, int oc, int b, int s) {
    int zr = (b + (s == 0 ? 1 : 0)) / 2;
    int orr = (b + (s == 1 ? 1 : 0)) / 2;
 
    if (zc < zr || oc < orr) {
        return "";
    }
 
    string ans;
    ans.reserve(zc + oc);
 
    int uz = 0;
    int uo = 0;
    int lz = zr;
    int lo = orr;
 
    for (int i = 0; i < b; ++i) {
        int bit = s ^ (i & 1);
        if (bit == 0) {
            int len = zc - uz - (lz - 1);
            ans.append(len, '0');
            uz += len;
            --lz;
        } else {
            int len = oc - uo - (lo - 1);
            ans.append(len, '1');
            uo += len;
            --lo;
        }
    }
 
    return ans;
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    int m = n - k;
    if (m < 2) {
        cout << -1 << '
';
        return;
    }
 
    vector<pair<int, int>> v;
    if (n % 2 == 0) {
        v.push_back({n / 2, n / 2});
    } else {
        v.push_back({n / 2 + 1, n / 2});
        v.push_back({n / 2, n / 2 + 1});
    }
 
    for (auto &p : v) {
        for (int s : {0, 1}) {
            string ans = build(p.first, p.second, m, s);
            if (!ans.empty()) {
                cout << ans << '
';
                return;
            }
        }
    }
 
    cout << -1 << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}