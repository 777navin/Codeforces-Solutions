#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), pos(n + 1);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }
 
    int l = 1, r = n;
    for (int x = 1; x <= n; x++) {
        int p = pos[x] % 2;
        int lp = l % 2;
        int rp = r % 2;
 
        if (p == lp)
            l++;
        else if (p == rp)
            r--;
        else {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}