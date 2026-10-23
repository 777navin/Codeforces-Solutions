#include <bits/stdc++.h>
using namespace std;
 
 
 
 
 
void solve() {
    string s;
    cin >> s;
 
    int z = -1, o = -1;
 
    for (int i = 0; i < (int)s.size(); ++i) {
        if (z == -1 && s[i] == '0') z = i;
        if (o == -1 && s[i] == '1') o = i;
    }
 
    string res;
    res.reserve(s.size());
 
    for (int i = 0; i < (int)s.size(); ++i) {
        if (i == z || i == o) continue;
        res.push_back(s[i]);
    }
 
    cout << res << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}