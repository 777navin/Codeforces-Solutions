#include <iostream>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n, k;
    cin >> n >> k;
 
    ll len = n - k + 1;
    cout << (1LL << len) + 2 * (k - 1) << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
        solve();
}