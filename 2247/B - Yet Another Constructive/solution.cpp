#include <iostream>
#include <vector>
 
using namespace std;
 
// Fast I/O
void solve() {
    long long n, k, m;
    cin >> n >> k >> m;
 
 
 
 
    if (k > m) {
        cout << "NO
";
        return;
    }
 
 
 
    cout << "YES
";
 
 
    for (int i = 1; i <= n; ++i) {
 
 
        if (i % k == 0) {
 
 
            cout << (m - k + 1) << (i == n ? "" : " ");
 
        } else {
 
 
            cout << 1 << (i == n ? "" : " ");
        }
    }
    cout << "
";
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