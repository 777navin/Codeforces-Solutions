#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    int blocks = 1;
    for (int cp = 1; cp < n; ++cp) {
 
        if (s[cp] != s[cp - 1]) {
            
            ++blocks;
        }
    }
 
    int bestReduction = 0;
    for (int cp = 1; cp < n - 1; ++cp) {
 
        if (s[cp - 1] == s[cp + 1] && s[cp] != s[cp - 1]) {
 
            bestReduction = min(bestReduction, -2);
        }
         else if (s[cp] != s[cp - 1] && s[cp] != s[cp + 1])
          {
            bestReduction = min(bestReduction, -1);
        }
    }
 
    cout << blocks + bestReduction << '
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