/**
 * Problem Name: A. Way Too Long Words
 * Platform: Codeforces
 * Language: C++17
 */
 
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    if (n > 10) {
        cout << s[0] << (n - 2) << s[n - 1] << "
";
    } else {
        cout << s << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}