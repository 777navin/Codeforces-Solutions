#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    string a, b;
    cin >> n >> m >> a >> b;
 
 
 
    int f[26] = {};
 
    for (char x : a) f[x - 'a']++;
    for (char x : b) f[x - 'a']--;
 
    f['s' - 'a']--;
    f['i' - 'a']--;
    f['x' - 'a']--;
 
    for (int x : f) {
        if (x) {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
 
 
    int t;
    cin >> t;
    while (t--) solve();
}