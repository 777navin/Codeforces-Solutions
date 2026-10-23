#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long x;
    cin >> n >> x;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    if (x == 1) {
        cout << 0 << "
";
        return;
    }
 
    vector<long long> pr;
    long long y = x;
    for (long long i = 2; i * i <= y; i++) {
        if (y % i == 0) {
            pr.push_back(i);
            while (y % i == 0)
                y /= i;
        }
    }
    if (y > 1)
        pr.push_back(y);
 
    long long ans = 0;
    for (long long p : pr) {
        long long s = 0;
        for (int i = 0; i < n; i++)
            if (a[i] % p == 0)
                s += a[i];
        ans = max(ans, s);
    }
 
    cout << ans << "
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