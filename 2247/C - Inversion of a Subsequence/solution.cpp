#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
 
    int u = 0, v = 0;
    
    for (int &x : a) {
        cin >> x;
      
      
        if (x == 1) u++;
    }
 
 
    for (int &x : b) {
 
 
        cin >> x;
        if (x == 0) v++;
    }
 
 
    
    int d = 0;
 
 
 
    int c1 = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
 
 
            d++;
            if (a[i] == 1) {
                c1++;
 
            }
        }
    }
    
    if (d == 0) {
        cout << 0 << "
";
        return;
    }
    
 
 
 
    if (c1 % 2 == 1) {
        cout << 1 << "
";
        return;
    }
    
 
 
    if (c1 > 0) {
        cout << 2 << "
";
        return;
    }
    
 
    
    if (u == 0 || v == 0) {
        cout << -1 << "
";
    } else {
        cout << 2 << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
 
 
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}