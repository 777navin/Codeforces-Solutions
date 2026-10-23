#include <bits/stdc++.h>
using namespace std;
 
 
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int rounds = 0;
    while (a != b && b != c && a != c) {
 
        array<int, 3> tokens = {a, b, c};
        sort(tokens.begin(), tokens.end());
 
        ++tokens[0];
        --tokens[2];
        ++rounds;
 
        a = tokens[0];
        b = tokens[1];
        c = tokens[2];
    }
 
    cout << rounds << '
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
 
    return 0;
}